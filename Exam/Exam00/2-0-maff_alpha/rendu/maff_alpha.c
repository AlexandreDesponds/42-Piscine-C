/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 17:54:24 by adespond          #+#    #+#             */
/*   Updated: 2015/09/04 17:57:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char min;
	char maj;
	int i;

	min = 'a';
	maj = 'B';
	i = 0;
	while (i <= 12)
	{
		write(1, &min, 1);
		write(1, &maj, 1);
		min = min + 2;
		maj = maj + 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
