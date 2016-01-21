void	ft_scrambler(int ***a, int *b, int *******c, int ****d);

int		main(void)
{
	int ***a;
	int *b;
	int *******c;
	int ****d;

	***a = 1;
	*b = 2;
	*******c = 3;
	****d = 4;
	ft_scrambler(a, b, c, d);
	return (0);
}
