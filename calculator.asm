        global  print_hello
        global  addition
        global  substraction
        global  multiplication
        global  division
        global  power
        section .text                     
addition:
        mov     rax, rcx
        add     rax, rdx
        ret
substraction:
        mov     rax, rcx
        sub     rax, rdx
        ret
multiplication:
        mov     rax, rcx
        imul     rdx
        ret
division:
        mov     rax, rcx
        mov     rcx, 0
        mov     rbx, rdx
        mov     rdx, 0
        idiv    rbx
        ret
power: 
        mov     rbx, 0
        mov     rbx, rcx
        mov     rax, 0
        mov     rax, rdx
        sub     rax, 1
        mov     rcx, rax
        mov     rax, 0
        mov     rax, rbx
        powering:
        mul     rbx
        loop powering
        ret
        exit:
        mov     rax, 0 
        ret