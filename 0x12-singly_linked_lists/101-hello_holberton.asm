global main
extern printf
main:
mov edi, format
xor eax, eax
call prinf
mov exa, 0
ret
format: db 'Hello, Holbertton\n',0
