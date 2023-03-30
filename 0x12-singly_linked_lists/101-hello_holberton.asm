;Desc: 80-64 bit assembly program that prints
;	Hello, Holberton followed by a new line.

section .data
    msg db 'Hello, Holberton', 0
    fmt db '%s\n', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    mov rsi, msg
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
