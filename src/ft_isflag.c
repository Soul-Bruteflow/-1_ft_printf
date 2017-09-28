#include "ft_printf.h"

t_bool ft_isflag(char *format, size_t i)
{
	if (format[i] == '-' || format[i] == '+' || format[i] == ' ' ||
		format[i] == '0' || format[i] == '#')
		return (true);
	return (false);
}