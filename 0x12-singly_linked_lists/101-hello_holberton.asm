section .data
	hello_message db "Hello, Holberton",10,0 ; The message to print with a newline character (10)

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, hello_message
	call printf
	pop rbp

	; Exit the program
	mov rax, 60	; syscall number for exit
	xor rdi, rdi	; exit status 0
	syscall
