/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 14:57:00 by adespond          #+#    #+#             */
/*   Updated: 2015/09/05 23:14:51 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	tmp;

	i = 1;
	count = ft_strlen(str);
	while (i < count)
	{
		tmp = str[i - 1];
		str[i - 1] = str[count - 1];
		str[count - 1] = tmp;
		i++;
		count--;
	}
	return (str);
}
