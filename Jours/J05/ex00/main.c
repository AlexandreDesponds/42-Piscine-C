#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "eeeee";
	char dest[] = "aaaaaaa";
	int i;

	ft_strcpy(dest, src);

	i = 0;
	while(i < 34)
	{
		printf("%c\n", dest[i] == '\0' ? 'X' : dest[i]);
		i++;
	}
}
