#!/usr/bin/env python3

import base64
import hashlib
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

def solve_arithmetic_challenge(r):
    msg = r.recvuntil(b'? ').decode()
    print(msg)
    problem = msg.split(":")[1][:-4]
    x = eval(problem)
    hex_little = x.to_bytes((x.bit_length() + 7) // 8, byteorder='little')
    print("Answer =", base64.b64encode(hex_little))
    r.send(base64.b64encode(hex_little))
    r.send('\n')

if __name__ == '__main__':
    r = remote('up23.zoolab.org', 10363)
    solve_pow(r)

    msg = r.recvuntil(b'base64').decode()
    print(msg)
    
    challenge_count = int(re.findall('[0-9]+',msg.split('\n')[3])[0])
    for i in range(challenge_count):
        solve_arithmetic_challenge(r)

    print(r.recvline().decode())
    r.close()
