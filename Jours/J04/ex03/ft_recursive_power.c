/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 10:22:54 by adespond          #+#    #+#             */
/*   Updated: 2015/09/07 11:36:31 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	if (power < 0)
		nb = 0;
	if (power-- > 1)
		nb = nb * ft_recursive_power(nb, power);
	return (nb);
}
