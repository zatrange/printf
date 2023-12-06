/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:57:34 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/06 18:56:13 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
static int formatsp(const char format, va_list arg)
{
	int	x;
	int char_count;
	int i;

	x = 0;
	i = 0;
	char_count = 0;
	if (format == 's')
		char_count += ft_printstr(va_arg(arg, char*));
	else if(format == '%')
		char_count += ft_printchar('%');
	else if(format == 'c')
		char_count += ft_printchar(va_arg(arg, int));
	else if(format == 'd' || format == 'i')
		char_count += ft_printnbr(va_arg(arg, int));
	else if(format == 'u')
		char_count += ft_printunsigned(va_arg(arg, unsigned int));
	else if(format == 'x' || format == 'X')
		char_count += ft_printhexa(va_arg(arg, unsigned int), format);
	return (char_count);
	
}

int ft_printf(const char *format, ...)
{

	int	x;
	int	char_count;
	va_list arg;
	va_start(arg, format);
	
	if (write(1, "", 0) == -1)
		return (-1);
	x = 0;
	char_count = 0;
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			char_count += formatsp(format[x + 1], arg);
			x++;
		}
		else 
			char_count += ft_printchar(format[x]);
		
		x++;
	}
	va_end(arg);
	return (char_count);
}
// int main()
// {
// int d = ft_printf("%X\n", -15);
// int f = printf("%X\n", -15);
// ft_printf("d %d\n", d);
// ft_printf("f %d\n", f);
// printf("d %x\n", d);
// printf("f %x\n", f);


	
// }
