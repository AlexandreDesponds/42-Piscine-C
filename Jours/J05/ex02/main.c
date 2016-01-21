#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "bonjaur, tu va bien ?";
	char to_find[] = "";
	char *ret;

	ret = ft_strstr(str, to_find);
	printf("la repond : %s", ret);
}
