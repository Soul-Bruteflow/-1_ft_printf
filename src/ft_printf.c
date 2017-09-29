#include <ntsid.h>
#include "ft_printf.h"


#include <stdio.h>
//int ft_print(const char *print)
//{
//	int len;
//
//	if(!print)
//		return (-1);
//	len = (int)ft_strlen(print);
//	write(1, print, (size_t)len);
//	return (len);
//}
//
//int print_string(va_list *args)
//{
//	return (ft_print(va_arg(*args, char*)));
//}
//
//size_t print_w_string(va_list *args)
//{
//	return (ft_putwstr(va_arg(*args, wchar_t*)));
//}
//
//int print_pointer(va_list *args)
//{
//	return (ft_print(uitoh(va_arg(*args, uintmax_t), true, false)));
//}
//
//int print_integer(va_list *args)
//{
//	return (ft_print(ft_itoa(va_arg(*args, int))));
//}
//
//int print_integer_long(va_list *args)
//{
//	return (ft_print(ft_itoa_long(va_arg(*args, long))));
//}
//
//int print_unsigned_integer(va_list *args)
//{
//	return (ft_print(ft_itoa_uint(va_arg(*args, unsigned int))));
//}
//
//int print_unsigned_long(va_list *args)
//{
//	return (ft_print(ft_itoa_ulong(va_arg(*args, unsigned long))));
//}
//
//int print_char(va_list *args)
//{
//	ft_putchar(va_arg(*args, char));
//	return (1);
//}
//
//size_t print_wchar(va_list *args)
//{
//	wchar_t		chr;
//	size_t			ret;
//
//	setlocale(LC_ALL, "");
//	chr = (wchar_t)va_arg(*args, wint_t);
//	ret = ft_putwchar(chr);
//	return (ret);
//}
//int print_uint_hex(va_list *args, t_bool size)
//{
//	return (ft_print(ft_basification(va_arg(*args, unsigned int), 16, size)));
//}

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
		if (ft_isdigit(p->format[p->i]))
			parse_precision(p);
	if (ft_islength(p->format, p->i))
		parse_length(p);
	if (ft_isconversion_char(p->format, p->i))
	{
		p->conv_char = p->format[p->i];
		(p->handlers[p->conv_char])(p);
	}
//
//	if (p->format[p->i] == '%')
//		p->count += ft_print("%");
//	else if (p->format[p->i] == 's')
//		p->count += print_string(p->args);
//	else if (p->format[p->i] == 'S')
//		p->count += print_w_string(p->args);
//	else if (p->format[p->i] == 'p')
//		p->count += print_pointer(p->args);
//	else if (p->format[p->i] == 'd' || p->format[p->i] == 'i')
//		p->count += print_integer(p->args);
//	else if (p->format[p->i] == 'D')
//		p->count += print_integer_long(p->args);
//	else if (p->format[p->i] == 'u')
//		p->count += print_unsigned_integer(p->args);
//	else if (p->format[p->i] == 'U')
//		p->count += print_unsigned_long(p->args);
//	else if (p->format[p->i] == 'c')
//		p->count += print_char(p->args);
//	else if (p->format[p->i] == 'C')
//		p->count += print_wchar(p->args);
//	else if (p->format[p->i] == 'x')
//		p->count += print_uint_hex(p->args);
//	else if (p->format[p->i] == 'X')
//		p->count += print_uint_hex(p->args);
//	else
//		return (0);
//	return (p->count);
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
		va_start (p->args, p->format);
		p->count = walk_format(p);
		va_end (p->args);
	}
	return ((int)p->count);
}