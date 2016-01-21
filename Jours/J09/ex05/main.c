#include <stdio.h>

int	ft_bouton(int i, int j, int k);

int	main(void)
{
	printf("%d", ft_bouton(1, 2, 3));
	printf("%d", ft_bouton(2, 1, 3));
	printf("%d", ft_bouton(3, 1, 2));
	printf("%d", ft_bouton(2, 2, 2));
	printf("%d", ft_bouton(2, 2, 1));
	printf("%d", ft_bouton(3, 2, 2));
	return (0);
}
