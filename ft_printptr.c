/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:09:44 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/07 16:02:16 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_putptr(unsigned long long nb)
{
	static int len = 0;
	char nm;
	if(nb >= 16)
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			nm = nb + 48; 
		else 
			nm = nb - 10 + 97;
		len += write (1, &nm, 1);
	}
	return(len);
}
int ft_printptr(void *ptr)
{
	int len = 2;
	uintptr_t nb = (uintptr_t)ptr;
	write(1, "0x", 2);
	return (ft_putptr(nb) + len);	
}