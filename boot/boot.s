.syntax unified
    .cpu cortex-a9
    .fpu neon-fp16
    .thumb

    .global _start
    .section .isr_vector, "a", %progbits
    _start:
        .word _estack
        .word Reset_Handler

    .section .text.Reset_Handler
    .weak Reset_Handler
    .type Reset_Handler, %function
    Reset_Handler:
        ldr r0, =memory_address
        ldr r1, =string_data
        mov r2, #0

    loop:
        ldrb r3, [r1, r2]
        cmp r3, #0
        beq end_loop
        strb r3, [r0, r2]
        add r2, r2, #1
        b loop

    end_loop:
        b .

    .size Reset_Handler, .-Reset_Handler

    .section .data
    .align 2
    memory_address:
        .word 0x20000000
    string_data:
        .asciz "UltraOS[v0.1]"

    .globl _sidata
    .globl _sdata
    .globl _edata
    .globl _sbss
    .globl _ebss
    .globl _estack

    _sidata:
        .word 0
    _sdata:
        .word 0
    _edata:
        .word 0
    _sbss:
        .word 0
    _ebss:
        .word 0
    _estack:
        .word 0x20008000    