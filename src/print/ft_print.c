#include "ft_printf.h"

int ft_print(const char *print)
{
	int len;

	if(!print)
		return (-1);
	len = (int)ft_strlen(print);
	write(1, print, (size_t)len);
	return (len);
}