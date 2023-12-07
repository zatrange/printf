/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:04:01 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/07 16:02:09 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int len;
	char *str;

	str = ft_itoa(nb);
	len = ft_printstr(str);
	free(str);
	return (len);
}
