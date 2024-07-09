	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter an positive integar: \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Factorial of %d = %d\12\0"
	.align 4
LC3:
	.ascii "Can't find the factorial of negative numbers\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	__imp___iob, %eax
	movl	%eax, (%esp)
	call	_fflush
	movl	__imp___iob, %eax
	addl	$32, %eax
	movl	%eax, (%esp)
	call	_fflush
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	_factorial
	movl	%eax, 28(%esp)
	movl	24(%esp), %eax
	testl	%eax, %eax
	js	L2
	movl	24(%esp), %eax
	movl	28(%esp), %edx
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	jmp	L3
L2:
	movl	$LC3, (%esp)
	call	_printf
L3:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_factorial
	.def	_factorial;	.scl	2;	.type	32;	.endef
_factorial:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jle	L6
	movl	8(%ebp), %eax
	subl	$1, %eax
	movl	%eax, (%esp)
	call	_factorial
	movl	%eax, %edx
	movl	8(%ebp), %eax
	imull	%edx, %eax
	movl	%eax, 8(%ebp)
	movl	8(%ebp), %eax
	jmp	L7
L6:
	movl	$1, %eax
L7:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_fflush;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
