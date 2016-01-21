#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int test;

	test = ft_iterative_power(12, 123);
	printf("%d \n", test);
	return (0);
}
