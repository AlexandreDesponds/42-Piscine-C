/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 18:36:08 by exam              #+#    #+#             */
/*   Updated: 2015/09/11 19:29:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_trim(char *a)
{
	int j;

	while (a[0] <= 32 && a[0] >= 1)
	{
		j = 1;
		while (a[j] != '\0')
		{
			a[j - 1] = a[j];
			j++;
		}
		a[j - 1] = '\0';
	}
	return (a);
}

void	ft_print(char *a)
{
	int i;
	int space;

	space = 0;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] <= 32 && a[i] >= 1)
		{
			space = 1;
		}
		else
		{
			if (space)
			{
				space = 0;
				write(1, "   ", 3);
			}
			write(1, &a[i], 1);
			space = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2 && argv[1][0] != '\0')
	{
		ft_print(ft_trim(argv[1]));
	}
	write(1, "\n", 1);
}
