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
        print("usage: {} sort-program".format(sys.argv[0]))
        sys.exit(-1)

    teamtoken = None if len(sys.argv) < 3 else sys.argv[2]

    r = process("./remote", shell=False)
    #r = remote("up23.zoolab.org", 10950)

    if type(r) != pwnlib.tubes.process.process:
        solve_pow(r)
        print(r.recvline().decode())
        r.sendlineafter(b'Enter to skip: ', b'' if teamtoken == None else teamtoken.encode())

    context.os = 'linux'
    context.arch = 'amd64'

    if os.path.exists(sys.argv[1]):
        with open(sys.argv[1], 'r') as f:
            payload = asm(f.read())
    else:
        payload = asm('ret')

    print(r.sendlineafter(b'want to send? ', str(len(payload)).encode()).decode())
    print(r.sendafter(b'your code: ', payload).decode())

    r.interactive()
