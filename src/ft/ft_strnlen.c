#include "ft_printf.h"

size_t		ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (*str++ && i < maxlen)
		i++;
	return (i);
}