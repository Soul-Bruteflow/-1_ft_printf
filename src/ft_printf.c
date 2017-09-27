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
	char *prefix;
	char *base_16_lower;
	char *base_16_upper;


	prefix = "0x";
	base_16_lower = "0123456789abcdef";
	base_16_upper = "0123456789ABCDEF";


	uintmax_t nbr = va_arg(*args, uintmax_t);

	char str[200];
	unsigned char tmp;

	int j;
	j = 0;
	int i = 6;
	while (i-- > 0)
	{
		tmp = *(i+ (unsigned char*) &nbr);
		str[j] = base_16_lower[tmp >> 4];
		j++;
		str[j] = base_16_lower[tmp & 0xF];
		j++;
	}
	char *ret = ft_strjoin(prefix, str);
	return (ft_print(ret));
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

size_t parse_core(const char *format, va_list *args, size_t *i)
{
//	sSpdDioOuUxXcC
	size_t count;


	(*i)++;
	count = 0;
	if (format[*i] == '%')
		count += ft_print("%");
	else if (format[*i] == 's')
		count += print_string(args);
	else if (format[*i] == 'S')
		count += print_w_string(args);
	else if (format[*i] == 'p')
		count += print_pointer(args);
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += print_integer(args);
	else if (format[*i] == 'D')
		count += print_integer_long(args);
	else if (format[*i] == 'u')
		count += print_unsigned_integer(args);
	else if (format[*i] == 'U')
		count += print_unsigned_long(args);
	else if (format[*i] == 'c')
		count += print_char(args);
	else if (format[*i] == 'C')
		count += print_wchar(args);
	else
		return (0);
	return (count);
}

int print_core(const char *format, va_list *args)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += parse_core(format, args, &i);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		done;

	done = 0;
	if (format)
	{
		va_start (args, format);
		done = print_core(format, &args);
		va_end (args);
	}
	return (done);
}