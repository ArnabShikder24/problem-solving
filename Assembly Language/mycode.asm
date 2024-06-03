; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.data
arr db 01H, 02H, 04H, 05H
len equ $-arr

.code
start: 
    mov si, offset arr    ; Point SI to the start of the array
    mov cx, len    ; Set CX to the length of the array

lp:
    mov al, [si]   ; Load the current array element into AL
    call fact      ; Call the factorial subroutine
    mov [si], al   ; Store the result back into the array
    inc si         ; Move to the next element
    loop lp        ; Loop until CX is 0
    
    ret
   
fact:
    cmp al, 0      ; Compare AL with 0
    jz fact_end    ; If AL is 0, end the factorial calculation

    mov bl, al     ; Copy AL to BL (to preserve original value)
    dec bl         ; Decrement BL (BL = AL - 1)
    mov bh, al     ; Copy AL to BH (to store the result)
    
fact_loop:
    cmp bl, 1      ; Compare BL with 1
    jbe fact_end   ; If BL <= 1, end the loop
    mul bl         ; Multiply AL by BL (result in AX)
    dec bl         ; Decrement BL
    jmp fact_loop  ; Repeat the loop
    
fact_end:
    ret            ; Return from the factorial subroutine
