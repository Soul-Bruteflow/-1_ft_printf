#include "ft_printf.h"

void	parse_precision(t_printf *p)
{
	if (p->format[p->i] == '.')
	{
		p->got_precision = true;
		while (ft_isdigit(p->format[p->i]) && p->format[p->i] != '\0')
		{
			p->precesion = p->precesion * 10 + p->format[p->i] - '0';
			p->i++;
		}
	}
}