#include "ft_printf.h"

uintmax_t	get_number_by_len_unsigned(t_printf *p)
{
	uintmax_t	nbr;

	nbr = va_arg(p->args, uintmax_t);
	if (p->len == hh)
		nbr = (unsigned char)nbr;
	else if (p->len == h)
		nbr = (unsigned short int)nbr;
	else if (p->len == l)
		nbr = (unsigned long int)nbr;
	else if (p->len == ll)
		nbr = (unsigned long long int)nbr;
	else if (p->len == j)
		nbr = (uintmax_t)nbr;
	else if (p->len == z)
		nbr = (size_t)nbr;
	else
		nbr = (unsigned int)nbr;
	return (nbr);
}