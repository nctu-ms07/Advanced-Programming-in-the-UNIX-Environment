#!/usr/bin/env python3

import base64
import hashlib
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

def upload(filename):
    with open(filename, 'rb') as file:
        plain_bytes = file.read();
    print("\x1b[1;32m** local md5({}): {}\x1b[m".format(filename, hashlib.md5(plain_bytes).hexdigest()));
    z = base64.b64encode(plain_bytes);
    for i in range(0, len(z), 1023):
        r.sendline(z[i:i+1023]);
    r.sendline(b'EOF');
    while True:
        msg = r.recvline();
        print(msg.decode());
        if b'md5' in msg:
            break;

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("usage: {} kernel-module".format(sys.argv[0]))
        sys.exit(-1)

    r = remote('up23.zoolab.org', 10548)
    solve_pow(r)

    print(r.recvuntil(b'finish the transmission.\n\n').decode())
    
    upload(sys.argv[1])
    
    r.newline = b'\r\n'
    r.interactive()
    r.close()
