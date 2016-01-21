#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char *str;
	str = "salut";

	printf("%d", ft_strlen(str));
}
