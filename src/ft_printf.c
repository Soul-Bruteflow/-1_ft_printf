#include <ntsid.h>
#include "ft_printf.h"


#include <stdio.h>
int ft_print(const char *print)
{
	int len;

	if(!print)
		return (-1);
	len = (int)ft_strlen(print);
	write(1, print, (size_t)len);
	return (len);
}

int print_string(va_list *args)
{
	return (ft_print(va_arg(*args, char*)));
}

size_t print_w_string(va_list *args)
{
	return (ft_putwstr(va_arg(*args, wchar_t*)));
}

int print_pointer(va_list *args)
{
	return (ft_print(uitoh(va_arg(*args, uintmax_t), true, false)));
}

int print_integer(va_list *args)
{
	return (ft_print(ft_itoa(va_arg(*args, int))));
}

int print_integer_long(va_list *args)
{
	return (ft_print(ft_itoa_long(va_arg(*args, long))));
}

int print_unsigned_integer(va_list *args)
{
	return (ft_print(ft_itoa_uint(va_arg(*args, unsigned int))));
}

int print_unsigned_long(va_list *args)
{
	return (ft_print(ft_itoa_ulong(va_arg(*args, unsigned long))));
}

int print_char(va_list *args)
{
	ft_putchar(va_arg(*args, char));
	return (1);
}

size_t print_wchar(va_list *args)
{
	wchar_t		chr;
	size_t			ret;

	setlocale(LC_ALL, "");
	chr = (wchar_t)va_arg(*args, wint_t);
	ret = ft_putwchar(chr);
	return (ret);
}
int print_uint_hex(va_list *args, t_bool size)
{
	return (ft_print(ft_basification(va_arg(*args, unsigned int), 16, size)));
}

int parse_core(t_printf *p)
{
//	%sSpdDioOuUxXcC
//	size_t count;

	p->i++;
//	count = 0;
//	if (ft_isflag(p))
//		handle_flags();
	if (p->format[p->i] == '%')
		p->count += ft_print("%");
	else if (p->format[p->i] == 's')
		p->count += print_string(p->args);
	else if (p->format[p->i] == 'S')
		p->count += print_w_string(p->args);
	else if (p->format[p->i] == 'p')
		p->count += print_pointer(p->args);
	else if (p->format[p->i] == 'd' || p->format[p->i] == 'i')
		p->count += print_integer(p->args);
	else if (p->format[p->i] == 'D')
		p->count += print_integer_long(p->args);
	else if (p->format[p->i] == 'u')
		p->count += print_unsigned_integer(p->args);
	else if (p->format[p->i] == 'U')
		p->count += print_unsigned_long(p->args);
	else if (p->format[p->i] == 'c')
		p->count += print_char(p->args);
	else if (p->format[p->i] == 'C')
		p->count += print_wchar(p->args);
	else if (p->format[p->i] == 'x')
		p->count += print_uint_hex(p->args);
	else if (p->format[p->i] == 'X')
		p->count += print_uint_hex(p->args);
	else
		return (0);
	return (p->count);
}

/*
** type *pointer = malloc(num_elems * sizeof(*pointer));
** %sSpdDioOuUxXcC
*/

t_bool init_handlers(t_printf *p)
{
	p->handlers = malloc(256 * sizeof(*(p->handlers)));
	if (p->handlers == NULL)
		return (NULL);
	p->handlers['%'] = handle_percent;
	p->handlers['s'] = handle_str;
	p->handlers['S'] = handle_wstr;
	p->handlers['p'] = handle_ptr;
	p->handlers['d'] = handle_int;
	p->handlers['D'] = handle_long;
	p->handlers['i'] = handle_int;
	p->handlers['o'] = handle_octal;
	p->handlers['O'] = handle_long;
	p->handlers['u'] = handle_unsigned;
	p->handlers['U'] = handle_long;
	p->handlers['x'] = handle_hex;
	p->handlers['X'] = handle_hex;
	p->handlers['c'] = handle_char;
	p->handlers['C'] = handle_wchar;
}

t_printf *init_printf(const char *format)
{
	t_printf *p;

	p = malloc(sizeof(*(p)));
	if (p == NULL)
		return (NULL);
	p->format = (char*)format;
	p->i = 0;
	p->count = 0;
	p->width = 0;
	p->precesion = 0;
	p->flags.minus = false;
	p->flags.plus = false;
	p->flags.space = false;
	p->flags.zero = false;
	p->flags.hashtag = false;
	p->got_width = false;
	p->got_precision = false;
	p->len = none;
	return (p);
}

int walk_format(t_printf *p)
{
	while (p->format[p->i])
	{
		if (p->format[p->i] == '%')
		{
			p->count += parse_core(p);
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
		va_start (p->args, p->format);
		p->count = walk_format(p);
		va_end (p->args);
	}
	return (p->count);
}