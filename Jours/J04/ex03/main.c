#include <unistd.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int test;

	test = ft_recursive_power(112312, 123123);
	printf("%d \n", test);
	return (0);
}
