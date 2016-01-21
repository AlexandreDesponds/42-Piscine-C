#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	unsigned int n = 1;

	char dest[] = "gg";
	char src[] = "aaaaaa";

	int i = 0;

	ft_strncpy(dest, src, n);

	while (i < 10)
	{
		printf("%c\n", dest[i] == '\0' ? 'X' : dest[i]);
		i++;
	}
}
