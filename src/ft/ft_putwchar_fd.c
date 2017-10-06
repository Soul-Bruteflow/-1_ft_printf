/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:23:20 by mvlad             #+#    #+#             */
/*   Updated: 2017/10/06 15:37:43 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_4(wchar_t wc, int fd)
{
	ft_putchar_fd((char)((wc >> 18) + 0xF0), fd);
	ft_putchar_fd((char)(((wc >> 12) & 0x3F) + 0x80), fd);
	ft_putchar_fd((char)(((wc >> 6) & 0x3F) + 0x80), fd);
	ft_putchar_fd((char)((wc & 0x3F) + 0x80), fd);
}

static void	handle_first(wchar_t wc, int fd, size_t *ret)
{
	ft_putchar_fd((char)wc, fd);
	(*ret)++;
}

size_t		ft_putwchar_fd(wchar_t wc, int fd)
{
	size_t ret;

	ret = 0;
	if (wc <= 127)
		handle_first(wc, fd, &ret);
	else if (wc <= 2047)
	{
		ft_putchar_fd((char)((wc >> 6) + 0xC0), fd);
		ft_putchar_fd((char)((wc & 0x3F) + 0x80), fd);
		ret += 2;
	}
	else if (wc <= 65535)
	{
		ft_putchar_fd((char)((wc >> 12) + 0xE0), fd);
		ft_putchar_fd((char)(((wc >> 6) & 0x3F) + 0x80), fd);
		ft_putchar_fd((char)((wc & 0x3F) + 0x80), fd);
		ret += 3;
	}
	else if (wc <= 1114111)
	{
		print_4(wc, fd);
		ret += 4;
	}
	return (ret);
}
