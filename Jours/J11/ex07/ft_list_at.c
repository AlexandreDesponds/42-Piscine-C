/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 04:29:08 by adespond          #+#    #+#             */
/*   Updated: 2015/09/17 07:18:10 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	if (nbr == 0)
		return (0);
	list = begin_list;
	i = 1;
	while (i < nbr)
	{
		if (list->next)
			list = list->next;
		else
			return (0);
		i++;
	}
	return (list);
}
