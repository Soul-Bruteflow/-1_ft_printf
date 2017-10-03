#include "ft_printf.h"

void parse_core(t_printf *p)
{
//	%sSpdDioOuUxXcC
//	size_t count;
	p->i++;
	if (ft_isflag(p->format, p->i))
		parse_flags(p);
	if (ft_isdigit(p->format[p->i]))
		parse_width(p);
	if (p->format[p->i] == '.')
		parse_precision(p);
	if (ft_islength(p->format, p->i))
		parse_length(p);
	if (ft_isconversion_char(p->format, p->i))
	{
		p->conv_char = (unsigned char)p->format[p->i];
		(p->handlers[p->conv_char])(p);
	}
}

ssize_t walk_format(t_printf *p)
{
	while (p->format[p->i])
	{
		if (p->format[p->i] == '%')
		{
			parse_core(p);
		}
		else
		{
			write(1, &p->format[p->i], 1);
			p->count++;
		}
		p->i++;
	}
	return (p->count);
}

int ft_printf(const char *format, ...)
{
	t_printf	*p;

	if (!(p = init_printf(format)))
		return (0);
	if (format)
	{
		va_start (p->args, format);
		p->count = walk_format(p);
		va_end (p->args);
	}
	return ((int)p->count);
}