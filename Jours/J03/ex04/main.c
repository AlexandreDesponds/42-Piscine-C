#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 9;
	printf("a: %d et b: %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d et b: %d", a, b);
	return (0);
}
