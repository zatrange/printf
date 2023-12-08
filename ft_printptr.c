/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:09:44 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 17:07:05 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr(unsigned long nb)
{
	int		count;
	char	nm;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putptr(nb / 16);
		count += ft_putptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			nm = nb + 48;
		else
			nm = nb - 10 + 97;
		count += write (1, &nm, 1);
	}
	return (count);
}

int	ft_printptr(void *ptr)
{
	int				len;
	unsigned long	nb;

	len = 2;
	nb = (unsigned long)ptr;
	write(1, "0x", 2);
	return (ft_putptr(nb) + len);
}
