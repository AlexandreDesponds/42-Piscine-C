#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base);

int		main(void)
{
	printf("%d", ft_collatz_conjecture(127));
	return (0);
}
