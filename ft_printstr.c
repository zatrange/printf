
#include "ft_printf.h"

int	ft_printstr(const char *str)
{
	int i = 0;
	int count;
	 
	count = 0;
	if(str == NULL)
	{
		write(1, "(null)", 6);
		return (count = 6); 
	}
	else {
	while (str[i] != '\0')
	{
		count += write(1, &str[i], 1);
		i++;
	}
	}
	return(count);
}