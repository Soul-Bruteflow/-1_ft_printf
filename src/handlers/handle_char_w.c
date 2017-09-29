#include "ft_printf.h"

void	handle_char_w(t_printf *p)
{
	wchar_t		chr;

//	setlocale(LC_ALL, "");
	chr = (wchar_t)va_arg(p->args, wint_t);
	p->count += ft_putwchar(chr);
}