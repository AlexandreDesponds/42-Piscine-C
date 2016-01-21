#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		main(void)
{
	int test;
	int *pointeur;

	ft_ft(pointeur);

	return (0);
}
