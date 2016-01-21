/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 11:44:22 by adespond          #+#    #+#             */
/*   Updated: 2015/09/03 12:33:37 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_is_negative.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		main()
{
	ft_is_negative(3);
	ft_is_negative(0);
	ft_is_negative(-3);
	return(0);
}
