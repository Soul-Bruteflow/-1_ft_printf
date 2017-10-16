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

	// %c
//	"|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|"

	//%i d
//	printf("|%*d|\n", 2,42);
//	ft_printf("|%*d|\n", 2,42);

//	sys = printf("|%-3w|(%3w)\t|%3Z|(%3Z)\t|%Q|(%3Q)\n");
//	own = ft_printf("|%-3w|(%3w)\t|%3Z|(%3Z)\t|%Q|(%3Q)\n");
//
//	sys = printf("|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|\n");
//	own = ft_printf("|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|\n");
//
//
//	sys = printf("% hZ%\n");
//	own = ft_printf("% hZ%\n");
////
//	sys = printf("% Z%s\n", "test");
//	own = ft_printf("% Z%s\n", "test");
//
//	sys = printf("%hjd\n", 4294967296);
//	own = ft_printf("%hjd\n", 4294967296);

//	|i|:|o|:
//	sys = printf("|%20hhi|\t|%20hi|\n", "4294967296","4294967296");
//	own = ft_printf("|%20hhi|\t|%20hi|\n","4294967296","4294967296");

//	sys = printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000002147483647-21474836482147483647-2147483648%d\n", 0000042);
//	own = ft_printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000002147483647-21474836482147483647-2147483648%d\n", 0000042);
//
//	sys = printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000\n002147483647-21474836482147483647-2147483648%d 0000042\n", -2147483648);
//	own = ft_printf("42Kashim a 1001 histoires à raconterIl fait au moins -8000\n002147483647-21474836482147483647-2147483648%d 0000042\n", -2147483648);

//	sys = printf("%zhd\n", 4294967296);
//	own = ft_printf("%zhd\n", 4294967296);

//	sys = printf("%jhd\n", 9223372036854775807);
//	own = ft_printf("%jhd\n", 9223372036854775807);

	sys = printf("|%S|\t|%S|\t|%C|\t|%S|\n",L"Wide sample string..",L"米",L'米',L"");;
	own = ft_printf("|%S|\t|%S|\t|%C|\t|%S|\n",L"Wide sample string..",L"米",L'米',L"");;

//	sys = printf("%%   %\n", "test");
//	own = ft_printf("%%   %\n", "test");

//	sys =  printf("|%5h hi|\t|%20l li|\n", SHRT_MIN,LONG_MIN);
//	own =  ft_printf("|%5h hi|\t|%20l li|\n", SHRT_MIN,LONG_MIN);

//	|o|:
//	"|%20l"CNV"|\t|%20ll"CNV"|\t|%20hh"CNV"|\t|%20h"CNV"|", -42,-42,-42,-42


//	sys = printf("%jhd\n", 9223372036854775807);
//	own = ft_printf("%jhd\n", 9223372036854775807);

//
//	//// %o %O
//
//	sys = printf("|%12o|\n", 0);
//	own = ft_printf("|%12o|\n", 0);
////
//	sys = printf("|%.o %.0o %0.o %0.0o|\t\t|%o %.2o %2.o %2.3o|\t\n",0,0,0,0,0,0,0,0);
//	sys = ft_printf("|%.o %.0o %0.o %0.0o|\t\t|%o %.2o %2.o %2.3o|\t\n",0,0,0,0,0,0,0,0);
//	own = printf("|%.O %.0O %0.O %0.0O|\t\t|%O %.2O %2.O %2.2O|\t\n",0,0,0,0,0,0,0,0);
//	own = ft_printf("|%.O %.0O %0.O %0.0O|\t\t|%O %.2O %2.O %2.2O|\t\n",0,0,0,0,0,0,0,0);
////
//////	sys = printf("|%2.o|\n",0);
//////	own = ft_printf("|%2.o|\n",0);
//////
//	sys = printf("|%#6.7o|\t|%#-12.7o|\t|%#.7o|\t|%#09.7o|\t|%#02.7o|\n", 8400,8400,0,8400,8400);
//	own = ft_printf("|%#6.7o|\t|%#-12.7o|\t|%#.7o|\t|%#09.7o|\t|%#02.7o|\n", 8400,8400,0,8400,8400);
//////
//	sys = printf("|%#3.o|\t|%#07.9o|\t|%#07.2o|\n", 0,8400,8400);
//	own = ft_printf("|%#3.o|\t|%#07.9o|\t|%#07.2o|\n", 0,8400,8400);
//////
//	sys = printf("|%#6.2o|\t|%#-12.2o|\t|%#.3o|\t\t|%#09.2o|\t|%#02.2o|\n", 8400,8400,0,8400,8400);
//	own = ft_printf("|%#6.2o|\t|%#-12.2o|\t|%#.3o|\t\t|%#09.2o|\t|%#02.2o|\n", 8400,8400,0,8400,8400);

//	"|%5h h"CNV"|\t|%20l l"CNV"|", SHRT_MIN,LONG_MIN

	//%U

//	sys = printf("|%5hU|\t|%20hhU|\n", SHRT_MIN,LONG_MIN);
//	own = ft_printf("|%5hU|\t|%20hhU|\n", SHRT_MIN,LONG_MIN);

//	sys = printf("|%5hhU|\t|%5hU|\n", LONG_MAX,LONG_MAX);
//	own = ft_printf("|%5hhU|\t|%5hU|\n", LONG_MAX,LONG_MAX);

//	sys = printf("|%5hhU|\t|%5hU|\t|%20lU|\t|%20llU|\t|%20jU|\t|%10zU|\t|%10U|\n", LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,-2,LONG_MIN);

	//%u
//	sys = printf("|%5h hu|\t|%20l lu|\n", SHRT_MIN,LONG_MIN);
//	own = printf("|%5h hu|\t|%20l lu|\n", SHRT_MIN,LONG_MIN);
//
//	// %i
//	sys = printf("|%5hi|\t|%20li|\n", SHRT_MIN,LONG_MIN);
//	own = ft_printf("|%5hi|\t|%20li|\n", SHRT_MIN,LONG_MIN);

//
//	//% d

//	sys = printf("|%5h hd|\t|%20l ld|\n", SHRT_MIN,LONG_MIN);
//	own = ft_printf("|%5h hd|\t|%20l ld|\n", SHRT_MIN,LONG_MIN);
//
//	//% D
//	printf("|%5h hD|\t|%20l lD|\n", SHRT_MIN,LONG_MIN);
//	ft_printf("|%5h hD|\t|%20l lD|\n", SHRT_MIN,LONG_MIN);

//	printf("|%5hhD|\t|%5hD|\t|%20lD|\t|%20llD|\t|%20jD|\t|%10zD|\t|%10D|\n", LONG_MAX,LONG_MAX,LONG_MAX,LONG_MAX,LONG_MAX,-2,LONG_MAX);
//	ft_printf("|%5hhD|\t|%5hD|\t|%20lD|\t|%20llD|\t|%20jD|\t|%10zD|\t|%10D|\n", LONG_MAX,LONG_MAX,LONG_MAX,LONG_MAX,LONG_MAX,-2,LONG_MAX);

//	printf("|%5hhD|\t|%5hD|\t|%20lD|\t|%20llD|\t|%20jD|\t|%10zD|\t|%10D|\n", LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,-2,LONG_MIN);
//	ft_printf("|%5hhD|\t|%5hD|\t|%20lD|\t|%20llD|\t|%20jD|\t|%10zD|\t|%10D|\n", LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,LONG_MIN,-2,LONG_MIN);
////
////	//// %x %X
////
//	sys = printf("|%#x|\n", 0);
//	own = ft_printf("|%#x|\n", 0);
//
//
//	printf("|%#10.7x|\t|%#02.7x|\n", 8400,8400);
//	ft_printf("|%#10.7x|\t|%#02.7x|\n", 8400,8400);
////
//	printf("|%#6.2x|\t|%#-12.2x|\t|%#.3x|\t\t|%#09.2x|\t|%#02.2x|\n", 8400,8400,0,8400,8400);
//	ft_printf("|%#6.2x|\t|%#-12.2x|\t|%#.3x|\t\t|%#09.2x|\t|%#02.2x|\n", 8400,8400,0,8400,8400);
//
//	printf("|%#-2.12x|\t|%#3.x|\t\t|%#02.9x|\t|%#02.2x|\n", 8400,0,8400,8400);
//	ft_printf("|%#-2.12x|\t|%#3.x|\t\t|%#02.9x|\t|%#02.2x|\n", 8400,0,8400,8400);
//
//	printf("|%ll.15.12d|\t|%.ll 15.12d|\t|%.015ll.12d|\t|%.ll#15.12d|\t|%.ll#15.12x|\n",-42,-42,-42,-42,-42);
//	ft_printf("|%ll.15.12d|\t|%.ll 15.12d|\t|%.015ll.12d|\t|%.ll#15.12d|\t|%.ll#15.12x|\n",-42,-42,-42,-42,-42);
//////
////	// %O
//	printf("|%5h hO|\t|%20l lO|\n", SHRT_MIN,LONG_MIN);
//	ft_printf("|%5h hO|\t|%20l lO|\n", SHRT_MIN,LONG_MIN);
//	sys = printf("|%#6O|\t|%#-12O|\t|%#O|\t\t|%#09O|\t|%#02O|\n", 8400,8400,0,8400,8400);
//	own = ft_printf("|%#6O|\t|%#-12O|\t|%#O|\t\t|%#09O|\t|%#02O|\n", 8400,8400,0,8400,8400);

	printf("sys - %d", sys);
	printf("\nown - %d\n\n", own);


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