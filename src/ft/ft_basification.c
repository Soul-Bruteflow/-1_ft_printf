/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basification.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:38:19 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init_basification(char *basification, char *reversed)
{
	ft_bzero(reversed, 200);
	ft_bzero(basification, 37);
	ft_strcpy(basification, "0123456789abcdefghijklmnopqrstuvwxyz");
}

static void	base_clamp(uint8_t *base)
{
	if (*base < MINBASE)
		*base = MINBASE;
	else if (*base > MAXBASE)
		*base = MAXBASE;
}

char		*ft_basification(uintmax_t num, uint8_t base, t_bool size)
{
	char		basification[37];
	uintmax_t	remainder;
	uintmax_t	digit;
	char		reversed[200];
	size_t		ndx;

	ndx = 0;
	init_basification(basification, reversed);
	base_clamp(&base);
	remainder = num;
	while (remainder > 0)
	{
		digit = remainder % base;
		remainder = remainder / base;
		reversed[ndx++] = basification[digit];
	}
	if (num == 0)
		return ("0");
	if (size)
	{
		ft_capitalize(reversed);
		return (ft_strreverse(reversed));
	}
	else
		return (ft_strreverse(reversed));
}
