#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 9;
	printf("a: %d et b: %d", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d et mod: %d", div, mod);
	return (0);
}
