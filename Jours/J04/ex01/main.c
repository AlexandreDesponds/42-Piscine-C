#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int test;

	test = ft_recursive_factorial(1232);
	printf("%d \n", test);
	return (0);
}
