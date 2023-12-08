/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:57:34 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 16:49:46 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatsp(const char format, va_list arg)
{
	int	char_count;

	char_count = 0;
	if (format == 's')
		char_count += ft_printstr(va_arg(arg, char *));
	else if (format == '%')
		char_count += ft_printchar('%');
	else if (format == 'c')
		char_count += ft_printchar(va_arg(arg, int));
	else if (format == 'd' || format == 'i')
		char_count += ft_printnbr(va_arg(arg, int));
	else if (format == 'u')
		char_count += ft_printunsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		char_count += ft_printhexa(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		char_count += ft_printptr(va_arg(arg, void *));
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	int		x;
	int		char_count;
	va_list	arg;

	va_start(arg, format);
	x = 0;
	char_count = 0;
	while (format[x] != '\0')
	{
		if (write(1, "", 0) == -1)
			return (-1);
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
				break ;
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
