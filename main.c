#include "ft_printf.h"
#include <stdio.h>
#include "libft.h"
#include <locale.h>
#include <limits.h>


int main()
{
	int sys;
	int own;

////  empty
//	printf("empty \n");
//	sys = printf("|Simple Test|\n");
//	own = ft_printf("|Simple Test|\n");
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['%'] = handle_percent;
//	printf("%% \n");
//	sys = printf("|%%|\n");
//	own = ft_printf("|%%|\n");
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);

////	p->handlers['s'] = handle_string;
//	printf("s \n");
//	char *s = "Hello";
//	sys = printf("|%s|\n", s);
//	own = ft_printf("|%s|\n", s);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['S'] = handle_string_w;
//	printf("S \n");
//	wchar_t wstr[5] = {0xC189, 0xC388, 0xC384, 0xC384, 0};
//	setlocale(LC_ALL, "");
//	sys = printf("|%ls|\n", &wstr);
//	own = ft_printf("|%S|\n", wstr);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);

////	p->handlers['p'] = handle_pointer;
//	printf("p \n");
//	unsigned int a = 42;
//	int *b = &a;


//	char tmp2 = (char)USHRT_MAX;


//	sys = printf("%15.4o\n", 42);
//	own = ft_printf("%15.4o\n", 42);

//	printf("%hhO\n", USHRT_MAX);
//	ft_printf("%hD\n", USHRT_MAX);

///////	-----------------------------

	//// %i
	printf("|%.i %.0i %0.i %0.0i|\t\t|%i %.2i %2.i %2.2i|\t\t\t\t",0,0,0,0,0,0,0,0);
	ft_printf("|%.i %.0i %0.i %0.0i|\t\t|%i %.2i %2.i %2.2i|\t\t\t\t",0,0,0,0,0,0,0,0);

	//// %d
	printf("|%.d %.0dddd %0.d %0.0d|\t\t|%d %.2d %2.d %2.2d|\t\t\t\t",0,0,0,0,0,0,0,0);
	ft_printf("|%.d %.0dddd %0.d %0.0d|\t\t|%d %.2d %2.d %2.2d|\t\t\t\t",0,0,0,0,0,0,0,0);

	//// %D
	printf("|%.D %.0D %0.D %0.0D|\t\t|%D %.2D %2.D %2.2D|\t",0,0,0,0,0,0,0,0);
	ft_printf("|%.D %.0D %0.D %0.0D|\t\t|%D %.2D %2.D %2.2D|\t",0,0,0,0,0,0,0,0);

	///// %u
	printf("|%.u %.0u %0.u %0.0u|\t\t|%u %.2u %2.u %2.2u|\t",0,0,0,0,0,0,0,0);
	ft_printf("|%.u %.0u %0.u %0.0u|\t\t|%u %.2u %2.u %2.2u|\t",0,0,0,0,0,0,0,0);

	//// %o %O

	printf("\t|%12o|\t|%12o|\t|%12o|", INT_MIN, INT_MAX,0);
	ft_printf("\t|%12o|\t|%12o|\t|%12o|", INT_MIN, INT_MAX,0);

	printf("|%.o %.0o %0.o %0.0o|\t\t|%o %.2o %2.o %2.2o|\t",0,0,0,0,0,0,0,0);
	ft_printf("|%.O %.0O %0.O %0.0O|\t\t|%O %.2O %2.O %2.2O|\t",0,0,0,0,0,0,0,0);

	printf("|%#6.7o|\t|%#-12.7o|\t|%#.7o|\t|%#09.7o|\t|%#02.7o|", 8400,8400,0,8400,8400);
	ft_printf("|%#6.7o|\t|%#-12.7o|\t|%#.7o|\t|%#09.7o|\t|%#02.7o|", 8400,8400,0,8400,8400);

	printf("|%#6.2o|\t|%#-12.2o|\t|%#.3o|\t\t|%#09.2o|\t|%#02.2o|", 8400,8400,0,8400,8400);
	ft_printf("|%#6.2o|\t|%#-12.2o|\t|%#.3o|\t\t|%#09.2o|\t|%#02.2o|", 8400,8400,0,8400,8400);




///////	-----------------------------
//
//	printf(""|%."CNV" %.0"CNV" %0."CNV" %0.0"CNV"|\t\t|%"CNV" %.2"CNV" %2."CNV" %2.2"CNV"|\t",0,0,0,0,0,0,0,0);
//	ft_printf("|%.0p|\t\t|%6p|\t\t|%6.p|\t|%10.6p|\n", NULL,NULL,NULL,NULL);

//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['d'] = handle_int;
//	printf("d \n");
//	int c = 42;
//	sys = printf("|%d|\n", c);
//	own = ft_printf("|%d|\n", c);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['D'] = handle_int_long;
//	printf("D \n");
//	long d = 4289089089054444444;
//	sys = printf("|%ld|\n", d);
//	own = ft_printf("|%D|\n", d);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['i'] = handle_int;
//	printf("i \n");
//	int g = -245645642;
//	sys = printf("|%d|\n", g);
//	own = ft_printf("|%d|\n", g);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['o'] = handle_octal_uint;
//	printf("o \n");
//	unsigned int q = 2456456462;
//	sys = printf("|%o|\n", q);
//	own = ft_printf("|%o|\n", q);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['O'] = handle_octal_ulong;
//	printf("O \n");
//	unsigned long k = 2456456422222222262;
//	sys = printf("|%lo|\n", k);
//	own = ft_printf("|%O|\n", k);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['u'] = handle_uint;
//	printf("u \n");
//	unsigned int m = 2456456462;
//	sys = printf("|%u|\n", m);
//	own = ft_printf("|%u|\n", m);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['U'] = handle_ulong;
//	printf("U \n");
//	unsigned long n = 2456456422222222262;
//	sys = printf("|%lu|\n", n);
//	own = ft_printf("|%U|\n", n);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['x'] = handle_hex_small;
//	printf("x \n");
//	unsigned int h = 2456456462;
//	sys = printf("|%x|\n", h);
//	own = ft_printf("|%x|\n", h);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['X'] = handle_hex_big;
//	printf("X \n");
//	unsigned int v = 2456456462;
//	sys = printf("|%X|\n", v);
//	own = ft_printf("|%X|\n", v);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['c'] = handle_char;
//	printf("c \n");
//	char i = 'A';
//	sys = printf("|%10c|\n", i);
//	own = ft_printf("|%10c|\n", i);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
////
////	p->handlers['C'] = handle_char_w;
//	printf("C \n");
//	wchar_t value = L'{';
//	sys = printf("|%-10lc|\n", value);
//	own = ft_printf("|%-10C|\n", value);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
}