/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:04:01 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 17:00:21 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int nb)
{
	int		count;
	char	nm;

	count = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		nm = nb + 48;
		count += write(1, &nm, 1);
	}
	return (count);
}

int	ft_printnbr(int nb)
{
	return (ft_putnbr(nb));
}
