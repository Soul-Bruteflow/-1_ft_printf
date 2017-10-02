#include "ft_printf.h"
#include <stdio.h>
#include "libft.h"
#include <locale.h>


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

//	p->handlers['p'] = handle_pointer;
	printf("p \n");
	unsigned int a = 1;
	int *b = &a;
	sys = printf("|%#3o|\n", a);
	own = ft_printf("|%#3o|\n", a);

	printf("sys - %d", sys);
	printf("\nown - %d\n\n", own);
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
//	sys = printf("|%c|\n", i);
//	own = ft_printf("|%c|\n", i);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
//
////	p->handlers['C'] = handle_char_w;
//	printf("C \n");
//	wchar_t value = L'{';
//	sys = printf("|%lc|\n", value);
//	own = ft_printf("|%C|\n", value);
//
//	printf("sys - %d", sys);
//	printf("\nown - %d\n\n", own);
}