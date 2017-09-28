#include "ft_printf.h"

#define MAXBASE 36

char *ft_basification(uintmax_t num, uint8_t base)
{
	char	BASIFICATION[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	long	remainder;
	long	digit;
	char	reversed[99];
	int		ndx = 0;

	if(base < 2)
		base = 2;
	if (base > MAXBASE)
		base = MAXBASE;
	remainder = num;
	while(remainder > 0)
	{
		digit = remainder % base;
		remainder = remainder / base;
		reversed[ndx++] = BASIFICATION[digit];
	}
	return (ft_strreverse(reversed));
}
