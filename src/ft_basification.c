#include "ft_printf.h"


//static void routine(long remainder,)
//{
//	digit = remainder % base;
//	remainder = remainder / base;
//	reversed[ndx++] = basification[digit];
//}
static void init_basification(char *basification, char *reversed)
{
	ft_bzero(reversed, 99);
	ft_bzero(basification, 37);
	ft_strcpy(basification, "0123456789abcdefghijklmnopqrstuvwxyz");
}

char *ft_basification(uintmax_t num, uint8_t base, t_bool size)
{
	char	basification[37];
	long	remainder;
	long	digit;
	char	reversed[99];
	int		ndx;

	ndx = 0;
	init_basification(basification, reversed);
	if(base < 2)
		base = 2;
	if (base > MAXBASE)
		base = MAXBASE;
	remainder = num;
	while(remainder > 0)
	{
		digit = remainder % base;
		remainder = remainder / base;
		reversed[ndx++] = basification[digit];
	}
	if (size)
	{
		ft_capitalize(reversed);
		return (ft_strreverse(reversed));
	}
	else
	{
		if (num == 0)
			return ("0");
		return (ft_strreverse(reversed));
	}
}
