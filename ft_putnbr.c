
#include "ft_printfh.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if(nb < 0)
	{
		write (1, "-", 1);
		nb *= -1; 
	}
	if (nb > 9)
	{	
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb >= 0 && nb <= 9)
	{
		nb = nb + 48;
		write (1, &nb, 1);
	}
}
