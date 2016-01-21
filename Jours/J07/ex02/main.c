#include <stdio.h>

int		*ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int **t;

	ft_ultimate_range(t, 2, 6);
	if(**t)
	{
		printf("%d", t[0][1]);
	}
	return (0);
}
