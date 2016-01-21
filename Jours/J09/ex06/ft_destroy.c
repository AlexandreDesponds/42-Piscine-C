/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 07:32:54 by adespond          #+#    #+#             */
/*   Updated: 2015/09/11 07:50:34 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int i;
	int y;

	i = 0;
	while (factory[i] != 0)
	{
		y = 0;
		while (factory[i][y] != 0)
		{
			free(factory[i][y]);
			y++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
