section		.text
	extern	printf
	global	main

main:
	mov	edi, sentence
	mov	eax, 0
	call	printf


section		.data
	sentence db 'Hello, Holberton', 0xa, 0
