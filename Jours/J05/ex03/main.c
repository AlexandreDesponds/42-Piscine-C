#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("1 la repond : %d\n", strcmp("dsfwer", "sdfdsf"));
	printf("1 la repond : %d\n", ft_strcmp("dsfwer", "sdfdsf"));
	printf("2 la repond : %d\n", strcmp("dsfwer", "sdfdsf"));
	printf("2 la repond : %d\n", ft_strcmp("dsfwer", "sdfdsf"));
	printf("3 la repond : %d\n", strcmp("asdfg", "asf"));
	printf("3 la repond : %d\n", ft_strcmp("asdfg", "asf"));
	printf("4 la repond : %d\n", strcmp("", "asf"));
	printf("4 la repond : %d\n", ft_strcmp("", "asf"));
	printf("5 la repond : %d\n", strcmp("asdfg", ""));
	printf("5 la repond : %d\n", ft_strcmp("asdfg", ""));
}
