
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

int		ft_printstr(const char *str);
int		ft_printchar(char c);
int		ft_printnbr(int nb);
int		ft_printunsigned(unsigned int nb);
int		ft_printf(const char *format, ...);
int		ft_printhexa(unsigned int nb, const char format);
# endif