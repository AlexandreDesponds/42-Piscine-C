#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char str;

	str = 'g';

	ft_putstr(&str);
}
