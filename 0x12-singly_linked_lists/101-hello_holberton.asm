section .data
	msg db 'Hello, Holberton', 0xa, 0
	fmt db '%s', 10, 0

section .text
	global main
	extern printf

main:
	mov edi, msg
	mov eax, 0
	call printf
