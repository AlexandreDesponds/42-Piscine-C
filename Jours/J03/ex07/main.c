#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char str[5];
	char *ret;

	str[0] = 's';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'u';
	str[4] = 't';

	printf("%s \n", str);

	ret = ft_strrev(str);
	
	printf("%s \n", str);
	printf("%s \n", ret);
}
