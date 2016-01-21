#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int test;

	test = ft_iterative_factorial(14);
	printf("%d \n", test);
	return (0);
}
