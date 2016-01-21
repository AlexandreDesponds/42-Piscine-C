/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 10:22:54 by adespond          #+#    #+#             */
/*   Updated: 2015/09/08 00:01:02 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	if (power < 0)
		return (0);
	resultat = 1;
	while (power-- > 0)
	{
		resultat = resultat * nb;
	}
	return (resultat);
}
