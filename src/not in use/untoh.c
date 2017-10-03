#include "ft_printf.h"

/*
** Usigned int to hex
** is_prefix - is there is 0x prefixed needed.
** size - the size of the letters A or a. 0/false - small;
*/

char *uitoh(uintmax_t nbr, t_bool is_prefix, t_bool size)
{
	char 			*base_16_lower;
	char 			result[200];
	unsigned char 	tmp;
	int				i[2];
	char 			*ret;

	i[1] = 0;
	i[0] = 6;
	base_16_lower = "0123456789abcdef";
	while (i[0]-- > 0)
	{
		tmp = *(i[0] + (unsigned char*) &nbr);
		result[i[1]] = base_16_lower[tmp >> 4];
		i[1]++;
		result[i[1]] = base_16_lower[tmp & 0xF];
		i[1]++;
	}
	if (size)
		ft_capitalize(result);
	if (is_prefix)
		ret = ft_strjoin("0x", result);
	else
		ret = result;
	return (ret);
}