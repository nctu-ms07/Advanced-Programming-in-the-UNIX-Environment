radix_sort:
  push rbp
  mov ecx, 1
  mov rax, rdi
  xor edx, edx
  sal rcx, 63
  mov rbp, rsp
.L2:
  xor QWORD PTR [rax+rdx*8], rcx
  inc rdx
  cmp rdx, 524288
  jne .L2
  sub rsp, 4194320
  xor ecx, ecx
  lea rdi, [rsp+15]
  sub rsp, 262160
  lea rdx, [rsp+15]
  and rdi, -16
  and rdx, -16
.L3:
  xor esi, esi
.L4:
  xor r8d, r8d
  mov DWORD PTR [rdx+rsi*4], r8d
  inc rsi
  cmp rsi, 65536
  jne .L4
  xor r8d, r8d
.L5:
  mov rsi, QWORD PTR [rax+r8*8]
  inc r8
  shr rsi, cl
  movzx esi, si
  inc DWORD PTR [rdx+rsi*4]
  cmp r8, 524288
  jne .L5
  xor esi, esi
.L6:
  mov r8d, DWORD PTR [rdx+rsi]
  add DWORD PTR [rdx+4+rsi], r8d
  add rsi, 4
  cmp rsi, 262140
  jne .L6
  mov esi, 524287
.L7:
  mov r10, QWORD PTR [rax+rsi*8]
  mov r8, r10
  shr r8, cl
  movzx r8d, r8w
  lea r9, [rdx+r8*4]
  movsx r11, DWORD PTR [r9]
  mov r8, r11
  mov QWORD PTR [rdi-8+r11*8], r10
  dec r8d
  mov DWORD PTR [r9], r8d
  sub rsi, 1
  jnb .L7
  xor esi, esi
.L8:
  mov r8, QWORD PTR [rdi+rsi]
  mov QWORD PTR [rax+rsi], r8
  add rsi, 8
  cmp rsi, 4194304
  jne .L8
  add ecx, 16
  cmp ecx, 64
  jne .L3
  mov ecx, 1
  xor edx, edx
  sal rcx, 63
.L9:
  xor QWORD PTR [rax+rdx*8], rcx
  inc rdx
  cmp rdx, 524288
  jne .L9
  leave
  ret
