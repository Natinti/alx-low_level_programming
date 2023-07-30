section .data
message db "Hello, Holberton", 10, 0
section .text
extern printf
global main

main:
	mov rdi, message
	mov rsi, 10
	xor eax, eax
	call printf
	mov rax, 60
	mov rdi, 0
	syscall
