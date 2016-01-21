#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));
int 	ta_mere(int i);
int		main(void)
{
	int ret[3];
	int *ret2;
	ret[0] = 100;
	ret[1] = 200;
	ret[2] = 300;

	ret2 = ft_map(ret, 3, &ta_mere);
	int i;
	i = 0;
	while(i < 3)
	{
		printf("%d", ret[i]);
		i++;
	}
	i = 0;
	while(i < 3)
	{
		printf("%d", ret2[i]);
		i++;
	}
	return (0);
}

int ta_mere(int i)
{
	return (i + 42);
}
