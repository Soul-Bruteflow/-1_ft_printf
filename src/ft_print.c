#include "ft_printf.h"

size_t ft_print(const char *print, t_bool is_len, size_t l)
{
	size_t len;

	if(!print)
		return (0);
	if (is_len)
		len = l;
	else
		len = (int)ft_strlen(print);
	write(1, print, len);
	return (len);
}