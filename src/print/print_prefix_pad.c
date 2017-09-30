#include "ft_printf.h"

size_t	print_prefix_pad(size_t nbrstrlen, unsigned int width, char padchar)
{
	ssize_t dif;
	size_t i;

	i = 0;
	dif = width - nbrstrlen;
	if (dif > 0)
	{
		while (i < dif)
		{
			write(1, &padchar, 1);
			i++;
		}
	}
	return (i);
}