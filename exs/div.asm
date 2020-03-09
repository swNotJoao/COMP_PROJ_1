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
	mov	[$n], eax
; IMM
	push	dword 0
; ADDRA
	pop	eax
	mov	[$d], eax
; COMM line 3
; RODATA
segment	.rodata
; ALIGN
align	4
; LABEL
$_i6:
; STR
	db	'Cálculo dos divisores de um número.', 0
; TEXT
segment	.text
; ADDR
	push	dword $_i6
; CALL
	call	$_prints
; CALL
	call	$_println
; TRASH
	add	esp, 4
; COMM line 4
; RODATA
segment	.rodata
; ALIGN
align	4
; LABEL
$_i7:
; STR
	db	'Introduza o número: ', 0
; TEXT
segment	.text
; ADDR
	push	dword $_i7
; CALL
	call	$_prints
; CALL
	call	$_println
; TRASH
	add	esp, 4
; COMM line 5
; CALL
	call	$_readi
; PUSH
	push	eax
; ADDRA
	pop	eax
	mov	[$n], eax
; COMM line 6
; ADDRV
	push	dword [$n]
; IMM
	push	dword 0
; JLE
	pop	eax
	pop	ecx
	cmp	ecx, eax
	jle	near $_i5
; IMM
	push	dword 2
; ADDRA
	pop	eax
	mov	[$i], eax
; JMP
	jmp	dword $_i2
; LABEL
$_i3:
; ADDRV
	push	dword [$n]
; ADDRV
	push	dword [$i]
; MOD
	pop	ecx
	pop	eax
	cdq
	idiv	ecx
	push	edx
; IMM
	push	dword 0
; JNE
	pop	eax
	pop	ecx
	cmp	ecx, eax
	jne	near $_i1
; ADDRV
	push	dword [$i]
; CALL
	call	$_printi
; CALL
	call	$_println
; TRASH
	add	esp, 4
; ADDR
	push	dword $d
; INCR
	pop	eax
	add	dword [eax], 1
; COMM line 12
; LABEL
$_i1:
; COMM line 14
; COMM line 14
; ADDR
	push	dword $i
; INCR
	pop	eax
	add	dword [eax], 1
; COMM line 14
; LABEL
$_i2:
; ADDRV
	push	dword [$i]
; ADDRV
	push	dword [$n]
; IMM
	push	dword 2
; DIV
	pop	ecx
	pop	eax
	cdq
	idiv	ecx
	push	eax
; JLE
	pop	eax
	pop	ecx
	cmp	ecx, eax
	jle	near $_i3
; COMM line 15
; COMM line 15
; COMM line 15
; COMM line 15
; COMM line 15
; ADDRV
	push	dword [$d]
; IMM
	push	dword 0
; JNE
	pop	eax
	pop	ecx
	cmp	ecx, eax
	jne	near $_i4
; RODATA
segment	.rodata
; ALIGN
align	4
; LABEL
$_i8:
; STR
	db	'é primo', 0
; TEXT
segment	.text
; ADDR
	push	dword $_i8
; CALL
	call	$_prints
; CALL
	call	$_println
; TRASH
	add	esp, 4
; LABEL
$_i4:
; COMM line 19
; COMM line 19
; COMM line 19
; LABEL
$_i5:
; COMM line 20
; COMM line 20
; COMM line 20
; IMM
	push	dword 0
; POP
	pop	eax
; RET
	ret
; DATA
segment	.data
; LABEL
$i:
; INTEGER
	dd	0
; LABEL
$d:
; INTEGER
	dd	0
; LABEL
$n:
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
