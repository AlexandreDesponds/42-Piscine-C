/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 19:21:52 by exam              #+#    #+#             */
/*   Updated: 2015/09/18 20:15:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_itoa_size(int value, int base)
{
	if (base == 10 && value < 0)
		return (ft_itoa_size(-value, base) + 1);
	if (value < 0)
		value = -value;
	if (value >= base)
		return (ft_itoa_size(value / base, base) + 1);
	else
		return (1);
}

void	ft_itoa_base_calcule(int value, int base, char *str)
{
	int i;

	i = 0;
	if (base == 10 && value < 0)
		str[0] = '-';
	if (value < 0)
		value = -value;
	if (value >= base)
	{
		ft_itoa_base_calcule(value / base, base, str);
		ft_itoa_base_calcule(value % base, base, str);
	}
	else
	{
		if (value >= 10)
			value = value + 7;
		while (str[i] != '\0')
			i++;
		str[i] = value + '0';
	}
}

char	*ft_itoa_base(int value, int base)
{
	int		length;
	char	*str;

	if (base >= 2 && base <= 16)
	{
		length = ft_itoa_size(value, base);
		str = (char*)malloc(sizeof(char) * (length + 1));
		ft_itoa_base_calcule(value, base, str);
		str[length] = '\0';
	}
	else
		return (0);
	return (str);
}
