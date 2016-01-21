#include <stdio.h>

char *ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char *r;

	r = ft_concat_params(argc, argv);
	printf("%s", r);
	return (0);
}
