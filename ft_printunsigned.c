
#include "ft_printf.h"

static int count(unsigned int nb)
{	
	int nmcount;

	nmcount = 0;
	if(nb == 0)
		return (1);
	
	while (nb > 0)
	{
		nb = nb / 10;
		nmcount++;
	}
	return (nmcount);
}
static char *unitoa(unsigned int nb)
{
	int len;
	char *s;

	len = count(nb);
	s = (char *)malloc((len + 1) * sizeof(char));
	s[len] = '\0';
	if(nb == 0)
		s[0] = '0';
	while (nb != 0)
	{
		s[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--; 
	}
	return(s);
}

int	ft_printunsigned(unsigned int nb)
{
	int len;
	char *str;

	str = unitoa(nb);
	len = ft_printstr(str);
	free (str);
	return (len);
}