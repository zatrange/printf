
#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int len;
	char *str;

	str = ft_itoa(nb);
	len = ft_printstr(str);
	free(str);
	return (len);
}
