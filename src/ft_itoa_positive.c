/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 11:06:54 by mvlad             #+#    #+#             */
/*   Updated: 2016/12/15 15:16:35 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		digits_count(uintmax_t n)
{
	size_t				i;

	i = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i - 1);
}

static char			*put_positive(char *s1, size_t dgts, uintmax_t nbr)
{
	char				*str;

	str = s1;
	while (nbr > 0)
	{
		dgts--;
		str[dgts] = (char)(nbr % 10 + '0');
		nbr = nbr / 10;
	}
	return (s1);
}

char				*ft_itoa_positive(uintmax_t n)
{
	char				*str;
	uintmax_t			nbr;

	nbr = n;
	if (nbr == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		return (str);
	}
	if (!(str = ft_strnew(digits_count(nbr))))
		return (NULL);
	str = put_positive(str, digits_count(nbr), nbr);
	return (str);
}
