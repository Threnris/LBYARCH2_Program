section .data
scale dq 255.0

section .text
bits 64
default rel

global imgCvtGrayDoubleToInt

imgCvtGrayDoubleToInt:
imul ecx, edx
xor r10d, r10d

movsd xmm3, [scale]

pixelConversion:
cmp r10d, ecx
jge finished

mov r11d, r10d
shl r11d, 3
add r11, r8

movsd xmm0, [r11]
mulsd xmm0, xmm3
cvttsd2si eax, xmm0

mov r12d, r10d
shl r12d, 2
add r12, r9
mov [r12], eax

inc r10d
jmp pixelConversion

finished:
mov rax, r9
ret
