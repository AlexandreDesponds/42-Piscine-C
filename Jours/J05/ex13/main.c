#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[200] = "testestestest";
	char src[55] = "42adasd";
	printf("%s\n", strcat(dest, src));
	return(0);
}
