
#include "ft_printfh.h"

void ft_putstr(const char *str)
{
	int i = 0;

	if(str == NULL)
	{
		write(1, "(null)", 6);
	}
	else {
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	}
}