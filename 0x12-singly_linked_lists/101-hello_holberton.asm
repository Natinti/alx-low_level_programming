section .data
	hello_holberton db 'Hello, Holberton', 10

section .text
	global	main
	extern	printf

main:
	sub rsp, 8
	mov rdi, hello_holberton
	call printf
	add rsp, 8

	mov rax, 60
	xor rdi, rdi
	syscall
