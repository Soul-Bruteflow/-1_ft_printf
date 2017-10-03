#include "ft_printf.h"

intmax_t	get_number_by_len(t_printf *p)
{
	intmax_t	nbr;

	nbr = va_arg(p->args, intmax_t);
	if (p->len == hh)
		nbr = (char)nbr;
	else if (p->len  == h)
		nbr = (short int)nbr;
	else if (p->len  == l)
		nbr = (long int)nbr;
	else if (p->len  == ll)
		nbr = (long long int)nbr;
	else if (p->len  == j)
		nbr = (intmax_t)nbr;
	else if (p->len  == z)
		nbr = (size_t)nbr;
	else
		nbr = (int)nbr;
	return (nbr);
}