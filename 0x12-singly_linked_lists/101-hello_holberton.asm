section .data
msg db 'Hello, Holberton', 0Ah, 0

section .text
global _start

_start:
; write message to stdout
mov rax, 1          ; system call for write
mov rdi, 1          ; file descriptor for stdout
mov rsi, msg        ; message to write
mov rdx, 17         ; length of message
syscall

; exit program
mov rax, 60         ; system call for exit
xor rdi, rdi        ; exit status code
syscall
