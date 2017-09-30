#include "ft_printf.h"

void	handle_string(t_printf *p)
{
	char	*str;
	size_t	strlen;

	if (p->len == l)
	{
		handle_string_w(p);
		return ;
	}
	else
	{
		str = va_arg(p->args, char*);
		if (str == NULL)
			str = "(null)";
		strlen = p->got_precision ? ft_strnlen(str, p->precision) :
				 ft_strlen(str);
		if (p->got_width && !p->flags.minus)

//			ft_printf_width_pad(strlen, arg->width, arg->pad_zeroes ? '0' : ' ');
			return;
		p->count += ft_print(str, true, strlen);
		ft_putnstr(str, strlen);
		if (arg->got_width && arg->right_pad)
			ft_printf_width_pad(strlen, arg->width, ' ');
		return (arg->got_width ? FT_MAX(strlen, arg->width) : strlen);
	}

	p->count += ft_print(va_arg(p->args, char*));
}