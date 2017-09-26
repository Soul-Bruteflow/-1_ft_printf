#include "libft.h"
#include "ft_printf.h"

void	ft_putwchar(wchar_t chr)
{
	ft_putwchar_fd(chr, STDOUT_FILENO);
}