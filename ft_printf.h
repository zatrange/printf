/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:05:48 by zgtaib            #+#    #+#             */
/*   Updated: 2023/12/08 17:07:59 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printstr(const char *str);
int	ft_printchar(char c);
int	ft_printnbr(int nb);
int	ft_printunsigned(unsigned int nb);
int	ft_printf(const char *format, ...);
int	ft_printhexa(unsigned int nb, const char format);
int	ft_printptr(void *ptr);
#endif