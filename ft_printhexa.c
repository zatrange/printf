
#include "ft_printf.h"

int ft_printhexa(unsigned int nb, const char format)
{
	char nm;
	static int count;

	count = 0;
	if(nb >= 16)
	{
		ft_printhexa((nb / 16), format);
		ft_printhexa((nb % 16), format);
	}
	else 
	{
		if(nb <= 9)
			nm = nb + 48;
		else
		{
			if (format == 'x')
				nm = nb - 10 + 97;
			else if (format == 'X')
				nm = nb - 10 + 65; 
		}	
		count += write (1, &nm, 1);
	}
	return (count);
}