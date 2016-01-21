#include <stdio.h>

void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);
int		main(int argc, char **argv)
{
	int i;
	argc = 1;
	i = 0;
	argv = ft_split_whitespaces(argv[1]);
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	i = 0;
	printf("\n==================================\n\n");
	ft_sort_wordtab(argv);
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
