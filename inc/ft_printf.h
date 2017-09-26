#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <locale.h>
# include <wchar.h>
# include "libft.h"

int 			ft_printf(const char *format, ...);
char			*ft_itoa_long(long n);
char			*ft_itoa_uint(unsigned int n);
char			*ft_itoa_ulong(unsigned long n);
void			ft_putwchar_fd(wchar_t chr, int fd);
void			ft_putwchar(wchar_t chr);

#endif
