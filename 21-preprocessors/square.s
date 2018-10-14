	.file	"square.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d %d\0"
LC1:
	.ascii "Max between a and b is %d\12\0"
LC2:
	.ascii "%d %d\12\0"
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
	leal	24(%esp), %eax
	movl	%eax, 8(%esp)
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	24(%esp), %eax
	movl	28(%esp), %edx
	cmpl	%edx, %eax
	jge	L2
	movl	%edx, %eax
L2:
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 28(%esp)
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 24(%esp)
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 28(%esp)
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	xorl	%edx, %eax
	movl	%eax, 28(%esp)
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	xorl	%edx, %eax
	movl	%eax, 24(%esp)
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	xorl	%edx, %eax
	movl	%eax, 28(%esp)
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
