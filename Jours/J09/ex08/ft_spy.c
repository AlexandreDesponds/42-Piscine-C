/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@istudent.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 04:49:48 by adespond          #+#    #+#             */
/*   Updated: 2015/09/11 04:50:01 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if ((*s1 == '\0' && *s2 == '\0') || (*s1 == '\0' && *s2 == ' '))
			return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_escape_space(char *str)
{
	int i;

	while (str[0] != '\0' && str[0] == ' ')
	{
		i = 0;
		while (str[i] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	int error;

	i = 1;
	error = 0;
	while (i < argc && error == 0)
	{
		if (ft_strcmp("president", ft_strlowcase(ft_escape_space(argv[i]))))
			error = 1;
		if (ft_strcmp("attack", ft_strlowcase(ft_escape_space(argv[i]))))
			error = 1;
		if (ft_strcmp("powers", ft_strlowcase(ft_escape_space(argv[i]))))
			error = 1;
		i++;
	}
	if (error)
		write(1, "Alert!!!\n", 9);
	return (0);
}
