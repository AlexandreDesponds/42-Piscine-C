#include <stdio.h>
int		ft_strcmp(char *s1, char *s2);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
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
	printf("\n===============================\n\n");
	ft_advanced_sort_wordtab(argv, ft_strcmp);
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
