#include "ft_printf.h"

void	parse_flags(t_printf *p)
{
	while (ft_isflag(p->format, p->i) && p->format[p->i] != '\0')
	{
		if (p->format[p->i] == '-')
			p->flags.minus = true;
		else if (p->format[p->i] == '+')
			p->flags.plus = true;
		else if (p->format[p->i] == ' ')
			p->flags.space = true;
		else if (p->format[p->i] == '0')
			p->flags.zero = true;
		else if (p->format[p->i] == '#')
			p->flags.hashtag = true;
		if (p->flags.plus)
			p->flags.space = false;
		p->i++;
	}
}