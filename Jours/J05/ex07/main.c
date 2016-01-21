#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char test[] = "SaluT 65 #@ ioul., 42main tEsT Koooo ,d2 .31d /4";
	printf("%s \n", test);
	printf("%s \n", ft_strcapitalize(test));
	return (0);
}
