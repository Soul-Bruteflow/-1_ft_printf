#ifndef _FT_PRINTF_H
# define _FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <locale.h>
# include <wchar.h>
# include "libft.h"
# include "bool.h"

# define MAXBASE 36
# define MINBASE 2

typedef enum		e_len
{
					none,
					hh,
					h,
					l,
					ll,
					j,
					z
}					t_len;

typedef	struct		s_flags
{
	t_bool			minus;
	t_bool			plus;
	t_bool			space;
	t_bool			zero;
	t_bool			hashtag;
}					t_flags;

typedef struct		s_printf
{
	char			*format;
	size_t			i;
	ssize_t 		count;
	va_list			args;
	t_flags			flags;
	t_bool			got_width;
	t_bool			got_precision;
	t_bool			is_signed;
	unsigned int	width;
	unsigned int	precision;
	t_len			len;
	unsigned char 	conv_char;
	unsigned short	base;
	void			(*handlers[256])(struct s_printf *p);
}					t_printf;

//void	(*handlers[256])(struct s_printf *p);
//int		(*p[4]) (int x, int y);

/*
** General
*/

t_printf 			*init_printf(const char *format);
t_bool 				init_conversion_handlers(t_printf *p);
void				default_handler_format(t_printf *p);
ssize_t 			walk_format(t_printf *p);
t_bool 				ft_isconversion_char(const char *format, size_t i);
/*
** Handlers
*/

void				handle_percent(t_printf *p);
void				handle_string(t_printf *p);
void				handle_string_w(t_printf *p);
void				handle_pointer(t_printf *p);
void				handle_pointer(t_printf *p);
void				handle_int(t_printf *p);
void				handle_int_long(t_printf *p);
void				handle_octal_uint(t_printf *p);
void				handle_octal_ulong(t_printf *p);
void				handle_uint(t_printf *p);
void				handle_ulong(t_printf *p);
void				handle_hex_small(t_printf *p);
void				handle_hex_big(t_printf *p);
void				handle_char(t_printf *p);
void				handle_char_w(t_printf *p);
void				handle_escape(t_printf *p);

void				handle_numbers(t_printf *p);
void				handle_bases(t_printf *p, char *pref, uint8_t base, t_bool size);
void				handle_case_one(t_printf *p, ssize_t dif, size_t len, char *pref);
void				handle_case_two(t_printf *p, size_t len, char *pref);
void				handle_case_three(t_printf *p, size_t len, char *pref);
void				handle_case_four(t_printf *p, size_t len, char *pref);
void				handle_case_five(t_printf *p, ssize_t dif, size_t len, char *pref);

/*
** Parsing
*/

void				parse_flags(t_printf *p);
void				parse_width(t_printf *p);
void				parse_precision(t_printf *p);
void				parse_length(t_printf *p);
intmax_t			get_number_by_len(t_printf *p);
uintmax_t			get_number_by_len_unsigned(t_printf *p);

char				*ft_itoa_positive(uintmax_t n);

/*
** Parsing support
*/

t_bool 				ft_isflag(const char *s, size_t i);
t_bool 				ft_islength(const char *format, size_t i);
size_t				ft_strnlen(const char *str, size_t maxlen);

/*
** Printing
*/

size_t 				ft_print(const char *print, t_bool is_len, size_t l);
size_t				ft_putnwstr(const wchar_t *print, t_bool is_len, size_t l);
size_t				print_prefix_pad(size_t nbrstrlen, unsigned int width, char padchar);

/*
** Support
*/
char				*handle_pref_less(t_printf *p, char *pref, ssize_t dif);
char				*handle_pref_greater(t_printf *p, char *pref, ssize_t dif);
void				number_zero(uintmax_t nbr, size_t *len, char **pref);


int					ft_printf(const char *format, ...);
void 				parse_core(t_printf *p);
char				*ft_itoa_long(long n);
char				*ft_itoa_uint(unsigned int n);
char				*ft_itoa_ulong(unsigned long n);
size_t				ft_putwchar_fd(wchar_t chr, int fd);
size_t				ft_putwchar(wchar_t chr);
size_t				ft_wstrlen(const wchar_t *s);
char				*uitoh(uintmax_t nbr, t_bool is_prefix, t_bool size);
int					ft_capitalize(char *s);
char 				*ft_strreverse(const char *s);
char 				*ft_basification(uintmax_t num, uint8_t base, t_bool size);



void 				handle_flags(const char *format, va_list *args, size_t *i);

#endif
