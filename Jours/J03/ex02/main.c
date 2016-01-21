#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 51;
	printf("a: %d et b: %d", a, b);
	ft_swap(&a, &b);
	printf("a: %d et b: %d", a, b);
	return (0);
}
