#include "ft_printf.h"

void handle_case_one(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (dif > 0)
		p->count += print_prefix_pad(len,
		(unsigned int)(p->width - dif - ft_strlen(pref)), ' ');
	else
		p->count += print_prefix_pad(len,
		(unsigned int)(p->width - ft_strlen(pref)), ' ');
	p->count += ft_print(pref, false, 0);
	p->count += print_prefix_pad(len, p->precision, '0');
}

void handle_case_two(t_printf *p, size_t len, char *pref)
{
	p->count += ft_print(pref, false, 0);
	p->count += print_prefix_pad(len, p->precision, '0');
}

void handle_case_three(t_printf *p, size_t len, char *pref)
{
	if (p->flags.zero)
	{
		p->count += ft_print(pref, false, 0);
		p->count += print_prefix_pad(len,
				(unsigned int)(p->width - ft_strlen(pref)), '0');
	}
	else
	{
		p->count += print_prefix_pad(len,
				(unsigned int)(p->width - ft_strlen(pref)), ' ');
		p->count += ft_print(pref, false, 0);
	}
}

void handle_case_four(t_printf *p, size_t len, char *pref)
{
	p->count += ft_print(pref, false, 0);
	if (p->got_precision)
		p->count += print_prefix_pad(len, p->precision, '0');
}

void handle_case_five(t_printf *p, ssize_t dif, size_t len, char *pref)
{
	if (dif > 0)
		p->count += print_prefix_pad(len,
				(unsigned int)(p->width - dif - ft_strlen(pref)), ' ');
	else
		p->count += print_prefix_pad(len,
				(unsigned int)(p->width - ft_strlen(pref)), ' ');
}