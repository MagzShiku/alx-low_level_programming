_start:
section .data
	msg db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	extern printf

global main
main:
	sub rsp, 8

	lea rdi, [rel format]
	lea rsi, [rel msg]
	xor eax, eax
	call printf

	add rsp, 8

	xor eax, eax
	ret

section .rodata
	text db "Hello, Holberton", 10, 0
	length equ $ - text	
