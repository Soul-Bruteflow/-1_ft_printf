#include "ft_printf.h"

int ft_capitalize(char *s)
{
	int i;

	i = 0;
	if (!s[i])
		return (-1);
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (0);
}