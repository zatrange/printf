/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:03:45 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 16:58:24 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa(unsigned int nb, const char format)
{
	char	nm;
	int		count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthexa((nb / 16), format);
		count += ft_puthexa((nb % 16), format);
	}
	else
	{
		if (nb <= 9)
			nm = nb + 48;
		else
		{
			if (format == 'x')
				nm = nb - 10 + 97;
			else if (format == 'X')
				nm = nb - 10 + 65;
		}
		count += write(1, &nm, 1);
	}
	return (count);
}

int	ft_printhexa(unsigned int nb, const char format)
{
	return (ft_puthexa(nb, format));
}
