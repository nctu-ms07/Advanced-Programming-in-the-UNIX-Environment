#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import sys

teamtoken = None if len(sys.argv) < 3 else sys.argv[2]

import pow as pw
from pwn import *

context.arch = 'amd64'
context.os = 'linux'
#context.log_level = 'debug'

#r = process("./sort", shell=False)
#r = remote("localhost", 10950)
r = remote("up23.zoolab.org", 10950)

if type(r) != pwnlib.tubes.process.process:
    pw.solve_pow(r)

payload = None
if len(sys.argv) > 1 and sys.argv[1] != '-':
    with open(sys.argv[1], 'rt') as f: payload = asm(f.read())
else:
    payload = asm("""
    ret
    """)

# for scoreboard
r.sendlineafter(b'Enter to skip: ', b'' if teamtoken == None else teamtoken.encode())

#print(disasm(payload))
print(f"!! payload: {len(payload)} bytes to send")
r.sendlineafter(b'want to send? ', str(len(payload)).encode())
if 'pause' in sys.argv[3:]: pause()
r.sendafter(b'your code: ', payload);
r.interactive()

# vim: set tabstop=4 expandtab shiftwidth=4 softtabstop=4 number cindent fileencoding=utf-8 :
