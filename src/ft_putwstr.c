#include "ft_printf.h"

size_t ft_putwstr(const wchar_t *str)
{
	size_t str_len;

	str_len = ft_wstrlen(str);
	ft_putnwstr(str, str_len);
	return (str_len);
}