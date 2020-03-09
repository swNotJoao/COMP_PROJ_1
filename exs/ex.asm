; TEXT
segment	.text
; ALIGN
align	4
; GLOBL
global	$_main:function
; LABEL
$_main:
; IMM
	push	dword 0
; ADDRA
	pop	eax
	mov	[$x], eax
; JMP
	jmp	dword $_i1
; LABEL
$_i2:
; ADDRV
	push	dword [$x]
; CALL
	call	$_printi
; CALL
	call	$_println
; TRASH
	add	esp, 4
; ADDR
	push	dword $x
; INCR
	pop	eax
	add	dword [eax], 1
; COMM line 5
; LABEL
$_i1:
; ADDRV
	push	dword [$x]
; IMM
	push	dword 30
; JLT
	pop	eax
	pop	ecx
	cmp	ecx, eax
	jl	near $_i2
; COMM line 6
; COMM line 6
; COMM line 6
; COMM line 6
; COMM line 6
; IMM
	push	dword 0
; POP
	pop	eax
; RET
	ret
; DATA
segment	.data
; LABEL
$x:
; INTEGER
	dd	0
; EXTRN
extern	$_prints
; EXTRN
extern	$_printi
; EXTRN
extern	$_println
; EXTRN
extern	$_readi
