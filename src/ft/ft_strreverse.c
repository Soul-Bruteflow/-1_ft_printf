#include "ft_printf.h"

char *ft_strreverse(const char *s)
{
	size_t	len;
	size_t	i;
	char	*ret;

	i = 0;
	len = ft_strlen(s);
	ret = ft_strnew(len);
	if (!s || !ret)
		return (NULL);
	len--;
	while (len > 0)
	{
		ret[i] = s[len];
		len--;
		i++;
	}
	ret[i] = s[len];
	return (ret);
}