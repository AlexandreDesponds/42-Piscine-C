#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char test[] = "SaluT 65 #@ ioul.,";
	printf("%s \n", test);
	printf("%s \n", ft_strlowcase(test));
	return (0);
}
