#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <locale.h>
# include <wchar.h>
# include "libft.h"
# include "bool.h"

int				ft_printf(const char *format, ...);
char			*ft_itoa_long(long n);
char			*ft_itoa_uint(unsigned int n);
char			*ft_itoa_ulong(unsigned long n);
size_t			ft_putwchar_fd(wchar_t chr, int fd);
size_t			ft_putwchar(wchar_t chr);
void			ft_putnwstr(const wchar_t *str, size_t len);
size_t			ft_wstrlen(const wchar_t *s);
size_t			ft_putwstr(const wchar_t *str);
char			*uitoh(uintmax_t nbr, t_bool is_prefix, t_bool size);
int				ft_capitalize(char *s);
char 			*ft_strreverse(const char *s);
char 			*ft_basification(uintmax_t num, uint8_t base, t_bool size);
t_bool 			ft_isflag(char *s, size_t i);

#endif
