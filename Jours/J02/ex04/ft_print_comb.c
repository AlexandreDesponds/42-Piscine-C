/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 11:16:41 by adespond          #+#    #+#             */
/*   Updated: 2015/09/03 16:21:23 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ad_print_space(void);
void	ad_print_numbers(char c, char d, char u);

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ad_print_numbers(c, d, u);
				if (!(c == '7' && d == '8' && u == '9'))
				{
					ad_print_space();
				}
				u++;
			}
			d++;
		}
		c++;
	}
}

void	ad_print_numbers(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
}

void	ad_print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
