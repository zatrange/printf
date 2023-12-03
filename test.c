
#include "ft_printfh.h"

int  ft_printf(const char *str, ...)
{

	size_t len = ft_strlen(str);
	int x = 0;
	va_list arg;
	va_start(arg, str);
	while (x < len)
	{
		if(str[x] == '%')
		{
			x++;
			if (str[x] == 's')
			{
				const char *src = va_arg(arg, const char*);
				ft_putstr(src);	
			}
			else if(str[x] == 'c')
			{
				char c = va_arg(arg , int);
				ft_putchar(c);
			}
		
			else if(str[x] == 'd' || str[x] == 'i')
			{
				int nb = va_arg(arg, int);
			ft_putnbr(nb);
			}
		}
			else
				write(1, &str[x], 1);
		
		x++;
	}
	return (x);
	va_end(arg);

	

}
int main()
{
	char *str = NULL;
	char *strr = "ahahhaha";
	char c = 'A';
	ft_printf("%s\n%s\n%c\n%c\n%d\n%i\n", str, strr, 'F', 'g', 10, 9);
	ft_printf("%s" "-------------------------------------------------------------------\n");
	printf("%i", 564646546);

}