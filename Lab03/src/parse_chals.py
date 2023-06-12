#! /usr/bin/env python3

from pwn import *

elf = ELF('./chals')
print("main =", hex(elf.symbols['main']))
print("{:12s} {}".format("Func", "GOT Offset"))

with open('got_offset.h', 'w+') as file:
  file.write('static unsigned long got_offset[] = { ')
  for i in range(1476):
    key = 'code_{}'.format(i)
    if key in elf.got:
      file.write("{}, ".format(hex(elf.got[key])))
      print("{:12s} {}".format(key, hex(elf.got[key])))
    else:
      file.write('0, ')
  file.write("{} }};".format(hex(elf.got["code_1476"])))
  print("{:12s} {}".format("code_1476", hex(elf.got["code_1476"])))
