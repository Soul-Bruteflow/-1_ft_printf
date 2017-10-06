/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:37:05 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char *ft_strreverse(const char *s)
{
	size_t	len;
	size_t	i;
	char	*ret;

	i = 0;
	len = ft_strlen(s);
	ret = ft_strnew(len);
	if (!s || !ret)
		return (NULL);
	len--;
	while (len > 0)
	{
		ret[i] = s[len];
		len--;
		i++;
	}
	ret[i] = s[len];
	return (ret);
}