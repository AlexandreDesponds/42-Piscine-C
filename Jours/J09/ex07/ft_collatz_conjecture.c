/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 05:53:30 by adespond          #+#    #+#             */
/*   Updated: 2015/09/11 06:35:02 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else
	{
		if (base % 2)
			base = ft_collatz_conjecture(3 * base + 1) + 1;
		else
			base = ft_collatz_conjecture(base / 2) + 1;
	}
	return (base);
}
