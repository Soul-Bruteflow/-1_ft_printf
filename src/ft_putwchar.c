#include "libft.h"
#include "ft_printf.h"

size_t	ft_putwchar(wchar_t chr)
{
	size_t ret;

	ret = ft_putwchar_fd(chr, STDOUT_FILENO);
	return (ret);
}