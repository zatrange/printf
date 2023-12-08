/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:04:42 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 17:02:20 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putunsigned(unsigned int nb)
{
	int		count;
	char	nm;

	count = 0;
	if (nb > 9)
	{
		count += ft_putunsigned(nb / 10);
		count += ft_putunsigned(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		nm = nb + 48;
		count += write (1, &nm, 1);
	}
	return (count);
}

int	ft_printunsigned(unsigned int nb)
{
	return (ft_putunsigned(nb));
}
