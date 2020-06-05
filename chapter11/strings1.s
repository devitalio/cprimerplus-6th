	.file	"strings1.c"
	.text
	.section	.rodata
.LC0:
	.string	"Something is pointing at me."
.LC1:
	.string	"Here are some strings"
	.align 8
.LC2:
	.string	"I am a symbolic string constant."
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$8295737305518383177, %rax
	movabsq	$7955925845332816500, %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	movabsq	$7021800530505523488, %rax
	movl	$11897, %edx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movq	$0, -64(%rbp)
	movq	$0, -56(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movb	$0, -16(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, -104(%rbp)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movq	-104(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movb	$112, -88(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
