	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   main.c                                             :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2015/09/03 11:44:22 by adespond          #+#    #+#             */
/*   Updated: 2015/09/04 12:47:00 by adespond         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.c"

	int		ft_putchar(char c)
	{
		write(1, &c, 1);
		return(0);
	}

	int		main()
	{
		ft_print_alphabet();
		return(0);
	}
