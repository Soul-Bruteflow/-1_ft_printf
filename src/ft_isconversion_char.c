#include "ft_printf.h"

t_bool ft_isconversion_char(const char *format, size_t i)
{
	if (format[i] != '\0' && (format[i] == 's' || format[i] == 'S' ||
		format[i] == 'p' || format[i] == 'd' || format[i] == 'i') ||
		format[i] == 'D' || format[i] == 'o' || format[i] == 'O' ||
		format[i] == 'u' || format[i] == 'U' || format[i] == 'x' ||
		format[i] == 'X' || format[i] == 'c' ||format[i] == 'C' ||
		format[i] == '%')

		return (true);
	return (false);
}