#include "ft_printf.h"
#include <stdio.h>


int main()
{
	int sys;
	int own;
	int a = 42;
	int b = &a;

//	printf("%d\n", b);
	printf("%p\n", (void *) &a);



/* initialisation */ 	// array of characters corresponding to numbers from 0 to 15
//	uint16_t ptr;

/* these lines go inside the loop */
//	ptr = (uint16_t) &a;

//	uintptr_t n = (uintptr_t)(void *)etext;

	uintptr_t ptr = (uintptr_t) &a;                 // store 16-bit address, and then pretend that memory is a character array
	unsigned char tmp;
	char string[]="0123456789abcdef";

//	tmp = *(6+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );

	tmp = *(5+ (unsigned char*) &ptr); // MSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );

	tmp = *(4+ (unsigned char*) &ptr); // MSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );

	tmp = *(3+ (unsigned char*) &ptr); // MSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );

	tmp = *(2+ (unsigned char*) &ptr); // MSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );

	tmp = *(1+ (unsigned char*) &ptr); // MSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );

	tmp = *(0+ (unsigned char*) &ptr); // LSB
	putchar( string[tmp >> 4] );
	putchar( string[tmp & 0xF] );


//	putchar( string[ (ptr >> 12) & 0xF ] ); // Write out highest 4-bits of memory address
//	putchar( string[ (ptr >>  8) & 0xF ] );
//	putchar( string[ (ptr >>  4) & 0xF ] );
//	putchar( string[ (ptr >>  0) & 0xF ] ); // Write out lowest 4-bits of memory address
//	putchar( string[tmp & 0xF] );

//	sys = printf("hello%S", "\ntest\n");
//	own = ft_printf("hello%S", "\ntest\n");
//	printf("\nz - %d", sys);
//	printf("\nx - %d", own);

//	int x = 345;
//	const char * y = "monkeys";
//
//	/* Demonstrate with numbers. */
//	printf ("<%d> is not justified.\n", x);
//	printf ("<%5d> is right-justified.\n", x);
//	printf ("<%-5d> The minus sign makes it left-justified.\n", x);
//	/* Demonstrate with strings. */
//	printf ("'%s' is not justified.\n", y);
//	printf ("'%10s' is right-justified.\n", y);
//	printf ("'%+8s' is left-justified using a minus sign.\n", y);
//
//	printf ("%4s%-6s", "no", "where");
}