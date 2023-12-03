
#ifndef PRINTFH_H
# define PRINTFH_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putstr(const char *str);
size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

# endif