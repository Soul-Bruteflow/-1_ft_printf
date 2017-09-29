#include "ft_printf.h"

void	parse_width(t_printf *p)
{
	if (ft_isdigit(p->format[p->i]))
	{
		p->got_width = true;
		while (ft_isdigit(p->format[p->i]) && p->format[p->i] != '\0')
		{
			p->width = p->width * 10 + p->format[p->i] - '0';
			p->i++;
		}
	}
}
