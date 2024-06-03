org 100h

start:
    mov si, offset array
    mov cx, 3

factorial_loop:
    mov al, [si]
    call factorial
    mov [si], al
    inc si
    loop factorial_loop

    ret

factorial:
    cmp al, 0
    jz factorial_end
    mov bl, al
    dec bl
    jz factorial_end
    mov ah, 1

factorial_calc:
    mul bl
    dec bl
    jnz factorial_calc

factorial_end:
    ret

array db 01h, 04h, 05h
