#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char test[] = "SaluT 65 {'[#@ ioul.,";
	printf("%s \n", test);
	printf("%s \n", ft_strupcase(test));
	return (0);
}
