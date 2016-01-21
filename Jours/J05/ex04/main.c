#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("1 la repond : %d\n", strncmp("dsfwer", "sdfdsf", 3));
	printf("1 la repond : %d\n", ft_strncmp("dsfwer", "sdfdsf", 3));
	printf("2 la repond : %d\n", strncmp("dsfwer", "sdfdsf", 1));
	printf("2 la repond : %d\n", ft_strncmp("dsfwer", "sdfdsf", 1));
	printf("3 la repond : %d\n", strncmp("asdfg", "asf", 5));
	printf("3 la repond : %d\n", ft_strncmp("asdfg", "asf", 5));
	printf("4 la repond : %d\n", strncmp("asfffff", "asf", 3));
	printf("4 la repond : %d\n", ft_strncmp("asfffff", "asf", 3));
	printf("5 la repond : %d\n", strncmp("asdfg", "Asf", 1));
	printf("5 la repond : %d\n", ft_strncmp("asdfg", "Asf", 1));
}
