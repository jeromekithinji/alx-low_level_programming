	extern	printf		; the function of type C, to be called

	        section .data		; Data section, initialized variables
msg:		db "Hello, Holberton", 0 ; 0 is used for C string
fmt:	    	db "%s", 10, 0          ; printf format, "\n",'0'

	        section .text		; section where code starts.

	        global main		; gcc entry point
main:					; program label for the entry point
	        push    rbp		; intialize stack frame, must be aligned

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		; or can be  xor  rax,rax
	        call    printf		; Call function of type C

		pop	rbp		; reinstate stack

		mov	rax,0		; normal, no error, return value
		ret			; return
