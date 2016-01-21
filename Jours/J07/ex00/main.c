#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *test = "SALUT cookie";
	char *copie;

	copie = ft_strdup(test);
	printf("%s\n", test);
	printf("%s\n", copie);
	return (0);
}
