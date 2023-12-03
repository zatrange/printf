
#include "ft_printfh.h"

size_t ft_strlen(const char *str)
{
	size_t i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	return (i);
}