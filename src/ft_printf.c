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

int print_w_string(va_list *args)
{
	return (ft_print(va_arg(*args, wchar_t*)));
}

int parse_core(const char *format, va_list *args, size_t *i)
{
//	sSpdDioOuUxXcC
	int count;

	(*i)++;
	count = 0;
	if (format[*i] == '%')
		count += ft_print("%");
	else if (format[*i] == 's')
		count += print_string(args);
	else if (format[*i] == 'S')
		count += print_w_string(args);
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