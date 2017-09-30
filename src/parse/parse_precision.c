#include "ft_printf.h"

void	parse_precision(t_printf *p)
{
	if (p->format[p->i] == '.')
	{
		p->got_precision = true;
		while (ft_isdigit(p->format[p->i]) && p->format[p->i] != '\0')
		{
			p->precision = p->precision * 10 + p->format[p->i] - '0';
			p->i++;
		}
	}
}