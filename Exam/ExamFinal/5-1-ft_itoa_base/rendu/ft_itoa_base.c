/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 13:19:30 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 14:27:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_itoa_base_count(int value, int base)
{
	if (value > base - 1)
	{
		return (ft_itoa_base_count(value / base, base) + 1);
		return (ft_itoa_base_count(value % base, base) + 1);
	}
	else
	{
		return (1);
	}
}

void	ft_itoa_base_convert(int value, int base, char *str)
{
	char	c;
	int		i;

	i = 0;
	if (value > base - 1)
	{
		ft_itoa_base_convert(value / base, base, str);
		ft_itoa_base_convert(value % base, base, str);
	}
	else
	{
		c = value + '0';
		if (value > 9)
			c = c + 7;
		while (str[i] != 0)
			i++;
		str[i] = c;
	}
}

char	*create_malloc(int count)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(count + 1);
	while (i <= count + 1)
	{
		ret[i] = '\0';
		i++;
	}
	return (ret);
}

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int		count;
	int		is_neg;

	if (!(base > 1 && base < 17))
		return (0);
	is_neg = 0;
	count = 0;
	if (value < 0)
	{
		is_neg = 1;
		value = value * -1;
	}
	count = ft_itoa_base_count(value, base);
	if (is_neg == 1 && base == 10)
		count++;
	ret = create_malloc(count);
	if (ret)
	{
		if (is_neg == 1 && base == 10)
			ret[0] = '-';
		ft_itoa_base_convert(value, base, ret);
	}
	return (ret);
}
