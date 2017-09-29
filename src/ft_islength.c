#include "ft_printf.h"

t_bool ft_islength(const char *format, size_t i)
{
	if (format[i] != '\0' && (format[i] == 'h' || format[i] == 'l'
		|| format[i] == 'j' || format[i] == 'z'))
		return (true);
	else if (format[i] != '\0' && format[i + 1] != '\0' &&
			((format[i] == 'h' && format[i + 1] == 'h') ||
			format[i] == 'l' && format[i + 1] == 'l'))
		return (true);
	return (false);
}