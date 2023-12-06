/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:58:30 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/06 17:49:31 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	digitcount(long c)
{
	int	count;

	count = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c = -c;
		count++;
	}
	while (c > 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int c)
{
	int		len;
	char	*s;
	long	nb;

	nb = c;
	len = digitcount(c);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	s[len] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		s[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (s);
}
