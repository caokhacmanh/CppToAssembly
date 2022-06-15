    __asm__(R"(
    	.file	"\316\264\303\374\303\3731.cpp"
    	.intel_syntax noprefix
    	.section	.text$_ZNKSt5ctypeIcE8do_widenEc,"x"
    	.linkonce discard
    	.align 2
    	.p2align 4,,15
    	.globl	_ZNKSt5ctypeIcE8do_widenEc
    	.def	_ZNKSt5ctypeIcE8do_widenEc;	.scl	2;	.type	32;	.endef
    	.seh_proc	_ZNKSt5ctypeIcE8do_widenEc
    _ZNKSt5ctypeIcE8do_widenEc:
    .LFB1343:
    	.seh_endprologue
    	mov	eax, edx
    	ret
    	.seh_endproc
    	.text
    	.p2align 4,,15
    	.def	__tcf_0;	.scl	3;	.type	32;	.endef
    	.seh_proc	__tcf_0
    __tcf_0:
    .LFB10977:
    	.seh_endprologue
    	lea	rcx, _ZStL8__ioinit[rip]
    	jmp	_ZNSt8ios_base4InitD1Ev
    	.seh_endproc
    	.section .rdata,"dr"
    .LC0:
    	.ascii "? \0"
    .LC1:
    	.ascii " \0"
    	.text
    	.p2align 4,,15
    	.globl	_Z3queiii
    	.def	_Z3queiii;	.scl	2;	.type	32;	.endef
    	.seh_proc	_Z3queiii
    _Z3queiii:
    .LFB10049:
    	push	rdi
    	.seh_pushreg	rdi
    	push	rsi
    	.seh_pushreg	rsi
    	push	rbx
    	.seh_pushreg	rbx
    	sub	rsp, 32
    	.seh_stackalloc	32
    	.seh_endprologue
    	mov	ebx, ecx
    	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]
    	mov	edi, edx
    	lea	rdx, .LC0[rip]
    	mov	esi, r8d
    	mov	r8d, 2
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]
    	mov	edx, ebx
    	call	_ZNSolsEi
    	lea	rdx, .LC1[rip]
    	mov	rbx, rax
    	mov	r8d, 1
    	mov	rcx, rax
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	rcx, rbx
    	mov	edx, edi
    	call	_ZNSolsEi
    	lea	rdx, .LC1[rip]
    	mov	rbx, rax
    	mov	r8d, 1
    	mov	rcx, rax
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	edx, esi
    	mov	rcx, rbx
    	call	_ZNSolsEi
    	mov	rsi, rax
    	mov	rax, QWORD PTR [rax]
    	mov	rax, QWORD PTR -24[rax]
    	mov	rbx, QWORD PTR 240[rsi+rax]
    	test	rbx, rbx
    	je	.L9
    	cmp	BYTE PTR 56[rbx], 0
    	je	.L5
    	movsx	edx, BYTE PTR 67[rbx]
    .L6:
    	mov	rcx, rsi
    	call	_ZNSo3putEc
    	mov	rcx, rax
    	call	_ZNSo5flushEv
    	mov	rcx, QWORD PTR .refptr._ZSt3cin[rip]
    	lea	rdx, PP[rip]
    	call	_ZNSirsERi
    	mov	eax, DWORD PTR PP[rip]
    	add	rsp, 32
    	pop	rbx
    	pop	rsi
    	pop	rdi
    	ret
    	.p2align 4,,10
    .L5:
    	mov	rcx, rbx
    	call	_ZNKSt5ctypeIcE13_M_widen_initEv
    	mov	rax, QWORD PTR [rbx]
    	lea	rcx, _ZNKSt5ctypeIcE8do_widenEc[rip]
    	mov	edx, 10
    	mov	rax, QWORD PTR 48[rax]
    	cmp	rax, rcx
    	je	.L6
    	mov	rcx, rbx
    	call	rax
    	movsx	edx, al
    	jmp	.L6
    .L9:
    	call	_ZSt16__throw_bad_castv
    	nop
    	.seh_endproc
    	.def	__main;	.scl	2;	.type	32;	.endef
    	.section .rdata,"dr"
    .LC2:
    	.ascii "! \0"
    	.section	.text.startup,"x"
    	.p2align 4,,15
    	.globl	main
    	.def	main;	.scl	2;	.type	32;	.endef
    	.seh_proc	main
    main:
    .LFB10050:
    	push	r14
    	.seh_pushreg	r14
    	push	r13
    	.seh_pushreg	r13
    	push	r12
    	.seh_pushreg	r12
    	push	rbp
    	.seh_pushreg	rbp
    	push	rdi
    	.seh_pushreg	rdi
    	push	rsi
    	.seh_pushreg	rsi
    	push	rbx
    	.seh_pushreg	rbx
    	sub	rsp, 32
    	.seh_stackalloc	32
    	.seh_endprologue
    	call	__main
    	mov	rcx, QWORD PTR .refptr._ZSt3cin[rip]
    	lea	rdx, T[rip]
    	call	_ZNSirsERi
    	mov	rbp, QWORD PTR .refptr._ZSt4cout[rip]
    	mov	rdi, QWORD PTR .refptr._ZSt3cin[rip]
    	mov	r12, rbp
    	.p2align 4,,10
    .L11:
    	mov	eax, DWORD PTR T[rip]
    	lea	edx, -1[rax]
    	test	eax, eax
    	mov	DWORD PTR T[rip], edx
    	je	.L44
    	lea	rdx, n[rip]
    	mov	rcx, rdi
    	call	_ZNSirsERi
    	mov	r8d, 3
    	mov	edx, 2
    	mov	ecx, 1
    	mov	DWORD PTR a[rip], 1
    	mov	DWORD PTR b[rip], 2
    	mov	DWORD PTR c[rip], 3
    	call	_Z3queiii
    	mov	DWORD PTR maxl[rip], eax
    	mov	eax, DWORD PTR n[rip]
    	cmp	eax, 3
    	jle	.L12
    	mov	ebx, 4
    	.p2align 4,,10
    .L14:
    	mov	edx, DWORD PTR b[rip]
    	mov	ecx, DWORD PTR a[rip]
    	mov	r8d, ebx
    	call	_Z3queiii
    	cmp	eax, DWORD PTR maxl[rip]
    	jle	.L13
    	mov	DWORD PTR maxl[rip], eax
    	mov	DWORD PTR c[rip], ebx
    .L13:
    	mov	eax, DWORD PTR n[rip]
    	add	ebx, 1
    	cmp	eax, ebx
    	jge	.L14
    .L12:
    	cmp	eax, 2
    	mov	r13d, DWORD PTR a[rip]
    	jle	.L15
    	mov	esi, DWORD PTR c[rip]
    	mov	ebx, 3
    	mov	r14d, 1
    	.p2align 4,,10
    .L19:
    	cmp	ebx, esi
    	je	.L16
    	mov	ecx, DWORD PTR a[rip]
    	cmp	ebx, ecx
    	je	.L17
    	cmp	ebx, DWORD PTR b[rip]
    	cmovne	r13d, ebx
    .L17:
    	mov	r8d, esi
    	mov	edx, ebx
    	call	_Z3queiii
    	cmp	eax, DWORD PTR maxl[rip]
    	mov	esi, DWORD PTR c[rip]
    	jle	.L16
    	mov	esi, DWORD PTR c[rip]
    	mov	DWORD PTR b[rip], ebx
    	xor	r14d, r14d
    	mov	DWORD PTR maxl[rip], eax
    .L16:
    	add	ebx, 1
    	cmp	DWORD PTR n[rip], ebx
    	jge	.L19
    	test	r14d, r14d
    	mov	r8d, esi
    	jne	.L20
    	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]
    	lea	rdx, .LC2[rip]
    	mov	ebx, DWORD PTR b[rip]
    	mov	r8d, 2
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]
    	mov	edx, ebx
    .L43:
    	call	_ZNSolsEi
    	lea	rdx, .LC1[rip]
    	mov	rbx, rax
    	mov	r8d, 1
    	mov	rcx, rax
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	edx, esi
    	mov	rcx, rbx
    	call	_ZNSolsEi
    	mov	rsi, rax
    	mov	rax, QWORD PTR [rax]
    	mov	rax, QWORD PTR -24[rax]
    	mov	rbx, QWORD PTR 240[rsi+rax]
    	test	rbx, rbx
    	je	.L45
    	cmp	BYTE PTR 56[rbx], 0
    	je	.L28
    	movsx	edx, BYTE PTR 67[rbx]
    .L29:
    	mov	rcx, rsi
    	call	_ZNSo3putEc
    	mov	rcx, rax
    	call	_ZNSo5flushEv
    	jmp	.L11
    .L15:
    	mov	r8d, DWORD PTR c[rip]
    	.p2align 4,,10
    .L20:
    	mov	edx, DWORD PTR b[rip]
    	mov	ecx, r13d
    	call	_Z3queiii
    	cmp	eax, DWORD PTR maxl[rip]
    	jge	.L25
    	mov	r8d, DWORD PTR c[rip]
    	mov	ecx, DWORD PTR a[rip]
    	mov	edx, r13d
    	call	_Z3queiii
    	cmp	eax, DWORD PTR maxl[rip]
    	mov	ebx, DWORD PTR b[rip]
    	jl	.L38
    	mov	ebx, DWORD PTR c[rip]
    .L38:
    	mov	esi, DWORD PTR a[rip]
    	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]
    	lea	rdx, .LC2[rip]
    	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
    	mov	edx, esi
    	mov	rcx, rax
    	call	_ZNSolsEi
    	lea	rdx, .LC1[rip]
    	mov	rcx, rax
    	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
    	mov	edx, ebx
    	mov	rcx, rax
    	call	_ZNSolsEi
    	mov	rcx, rax
    	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
    	jmp	.L11
    	.p2align 4,,10
    .L28:
    	mov	rcx, rbx
    	call	_ZNKSt5ctypeIcE13_M_widen_initEv
    	mov	rax, QWORD PTR [rbx]
    	lea	rcx, _ZNKSt5ctypeIcE8do_widenEc[rip]
    	mov	edx, 10
    	mov	rax, QWORD PTR 48[rax]
    	cmp	rax, rcx
    	je	.L29
    	mov	rcx, rbx
    	call	rax
    	movsx	edx, al
    	jmp	.L29
    	.p2align 4,,10
    .L25:
    	mov	ebx, DWORD PTR b[rip]
    	lea	rdx, .LC2[rip]
    	mov	rcx, rbp
    	mov	r8d, 2
    	mov	esi, DWORD PTR c[rip]
    	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x
    	mov	edx, ebx
    	mov	rcx, r12
    	jmp	.L43
    .L44:
    	add	rsp, 32
    	pop	rbx
    	pop	rsi
    	pop	rdi
    	pop	rbp
    	pop	r12
    	pop	r13
    	pop	r14
    	ret
    .L45:
    	call	_ZSt16__throw_bad_castv
    	nop
    	.seh_endproc
    	.p2align 4,,15
    	.def	_GLOBAL__sub_I_T;	.scl	3;	.type	32;	.endef
    	.seh_proc	_GLOBAL__sub_I_T
    _GLOBAL__sub_I_T:
    .LFB11008:
    	sub	rsp, 40
    	.seh_stackalloc	40
    	.seh_endprologue
    	lea	rcx, _ZStL8__ioinit[rip]
    	call	_ZNSt8ios_base4InitC1Ev
    	lea	rcx, __tcf_0[rip]
    	add	rsp, 40
    	jmp	atexit
    	.seh_endproc
    	.section	.ctors,"w"
    	.align 8
    	.quad	_GLOBAL__sub_I_T
    	.globl	c
    	.bss
    	.align 4
    c:
    	.space 4
    	.globl	b
    	.align 4
    b:
    	.space 4
    	.globl	a
    	.align 4
    a:
    	.space 4
    	.globl	PP
    	.align 4
    PP:
    	.space 4
    	.globl	maxl
    	.align 4
    maxl:
    	.space 4
    	.globl	n
    	.align 4
    n:
    	.space 4
    	.globl	T
    	.align 4
    T:
    	.space 4
    .lcomm _ZStL8__ioinit,1,1
    	.ident	"GCC: (tdm64-1) 4.9.2"
    	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
    	.def	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_x;	.scl	2;	.type	32;	.endef
    	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
    	.def	_ZNSo3putEc;	.scl	2;	.type	32;	.endef
    	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
    	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
    	.def	_ZNKSt5ctypeIcE13_M_widen_initEv;	.scl	2;	.type	32;	.endef
    	.def	_ZSt16__throw_bad_castv;	.scl	2;	.type	32;	.endef
    	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
    	.def	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
    	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
    	.def	atexit;	.scl	2;	.type	32;	.endef
    	.section	.rdata$.refptr._ZSt3cin, "dr"
    	.globl	.refptr._ZSt3cin
    	.linkonce	discard
    .refptr._ZSt3cin:
    	.quad	_ZSt3cin
    	.section	.rdata$.refptr._ZSt4cout, "dr"
    	.globl	.refptr._ZSt4cout
    	.linkonce	discard
    .refptr._ZSt4cout:
    	.quad	_ZSt4cout
    )");
