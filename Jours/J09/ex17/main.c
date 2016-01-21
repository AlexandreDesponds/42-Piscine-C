#include <stdio.h>
int		ft_max(int *tab, int length);
int		main(void)
{
	int	tab[5];

	tab[0] = 1;
	tab[1] = -1;
	tab[2] = 14;
	tab[3] = 4;
	tab[4] = 3;
	printf("%d", ft_max(tab, 5));
	return (0);
}
