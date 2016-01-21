/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 05:57:27 by adespond          #+#    #+#             */
/*   Updated: 2015/09/16 09:06:21 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_ascii(char **tab, int length)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < (length - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int length;

	length = 0;
	while (tab[length])
		length++;
	ft_sort_ascii(tab, length);
}
