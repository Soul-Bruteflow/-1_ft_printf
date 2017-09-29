#include "ft_printf.h"

/*
** %sSpdDioOuUxXcC
*/

t_bool init_conversion_handlers(t_printf *p)
{
//	p->handlers = malloc(256 * sizeof(*(p->handlers)));
//	if (p->handlers == NULL)
//		return (NULL);
	p->handlers['%'] = handle_percent;
	p->handlers['s'] = handle_string;
	p->handlers['S'] = handle_string_w;
	p->handlers['p'] = handle_pointer;
	p->handlers['d'] = handle_int;
	p->handlers['D'] = handle_int_long;
	p->handlers['i'] = handle_int;
	p->handlers['o'] = handle_octal_uint;
	p->handlers['O'] = handle_octal_ulong;
	p->handlers['u'] = handle_uint;
	p->handlers['U'] = handle_ulong;
	p->handlers['x'] = handle_hex_small;
	p->handlers['X'] = handle_hex_big;
	p->handlers['c'] = handle_char;
	p->handlers['C'] = handle_char_w;
	return (true);
}

void	default_handler_format(t_printf *p)
{
	p->width = 0;
	p->precesion = 0;
	p->flags.minus = false;
	p->flags.plus = false;
	p->flags.space = false;
	p->flags.zero = false;
	p->flags.hashtag = false;
	p->got_width = false;
	p->got_precision = false;
	p->len = none;
}

t_printf *init_printf(const char *format)
{
	t_printf *p;

	p = malloc(sizeof(*(p)));
	if (p == NULL)
		return (NULL);
	p->format = (char*)format;
	p->i = 0;
	p->count = 0;
	default_handler_format(p);
	init_conversion_handlers(p);
	return (p);
}