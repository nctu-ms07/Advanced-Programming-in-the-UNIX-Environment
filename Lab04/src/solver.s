shellcode: # Function arguments are put in the registers rdi, rsi, rdx, rcx, r8 and r9, in that order.
	mov r8, rdi
	lea rdi, [rip+.fmt]
	mov rsi, QWORD PTR fs:0x28
	mov rdx, rbp
	mov rcx, [rsp]
	add rcx, 0xab
	mov eax, 0
	jmp r8
.fmt:
	.string	"Stack Bottom (Higher address)\nStack Top (Lower address)\ncanary         : %p\nrbp            : %p\nguess ret_addr : %p\n"
