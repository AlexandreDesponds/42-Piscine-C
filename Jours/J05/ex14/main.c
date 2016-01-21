#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int n);

int	main(void)
{
	char dest[50] = "testestestest";
	char src[2] = "42";
	int n = 434;
	printf("%s\n", ft_strncat(dest, src, n));
	return(0);
}
