#include "ft_printf.h"
#include <stdio.h>
#include "libft.h"
#include <locale.h>


int main()
{
	int sys;
	int own;

	wchar_t wstr[5] = {0xC189, 0xC388, 0xC384, 0xC384, 0};
	setlocale(LC_ALL, "");
	sys = printf("%ls\n", &wstr);
	own = ft_printf("%S\n", wstr);
//	own = ft_putwstr(wstr);
	printf("\nz - %d", sys);
	printf("\nx - %d", own);

//	int sys;
//	int own;
//	unsigned long a = -2909989898999999999;
//	int b = &a;
//
//	size_t sys1 = 0;
//	size_t own1 = 0;
//
//
//
//	wchar_t *s;
//	s = (wchar_t *) malloc(sizeof(wchar_t) * 6);
//	s[0] = 0xC389;
//	s[1] = 0xC389;
//	s[2] = 0xC389;
//	s[3] = 0xC389;
//	s[4] = 0xC129;
//	s[5] = 0;
//
////	setlocale(LC_ALL, "");
//
//	/* Wchar */
//	setlocale(LC_ALL, "");
//
//	wchar_t value = L'。';
//
//
//	wchar_t wstr[4] = {0xC389, 0xC388, 0xC384, 0};
//	//我是一只猫。{
//
//	sys = printf("printf value - %ls\n", s);
////	own = ft_printf("printf value - %C\n", value);
////	ft_putwchar(value);
//	own = ft_putwstr(s);
//
//	printf("\nz - %d", sys);
//	printf("\nx - %d", own);
//
////	sys1 = wcslen(wstr);
////	own1 = ft_wcslen(wstr);
//
////	printf("\nz - %d", sys1);
////	printf("\nx - %d", own1);
//
//	free(s);
//	return (0);

//	char *t = ft_itoa(a);
//
////	printf("%d\n", b);
//
//	/* pointer */
//
////	sys = printf("%p\n", (void *) &a);
////	own = ft_printf("%p\n", (void *) &a);
////	printf("\nz - %d", sys);
////	printf("\nx - %d", own);
//
//	/* decimal */
//
//	sys = printf("%s\n", wc);
//	own = ft_printf("%C\n", wc);
//	printf("\nz - %d", sys);
//	printf("\nx - %d", own);




/* initialisation */ 	// array of characters corresponding to numbers from 0 to 15
//	uint16_t ptr;

/* these lines go inside the loop */
//	ptr = (uint16_t) &a;

//	uintptr_t n = (uintptr_t)(void *)etext;

//	uintptr_t ptr = (uintptr_t) &a;                 // store 16-bit address, and then pretend that memory is a character array
//	unsigned char tmp;
//	char base_16_s[]="0123456789abcdef";
//	char base_16_b[]="0123456789ABCDEF";
//
//	char str[200];
//
//	int j;
//	j = 0;
//	int i = 6;
//	while (i-- > 0)
//	{
//		tmp = *(i+ (unsigned char*) &ptr);
//		str[j] = base_16_s[tmp >> 4];
//		j++;
//		str[j] = base_16_s[tmp & 0xF];
//		j++;
//	}

//	tmp = *(5+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );
//
//	tmp = *(4+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );
//
//	tmp = *(3+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );
//
//	tmp = *(2+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );
//
//	tmp = *(1+ (unsigned char*) &ptr); // MSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );
//
//	tmp = *(0+ (unsigned char*) &ptr); // LSB
//	putchar( string[tmp >> 4] );
//	putchar( string[tmp & 0xF] );


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