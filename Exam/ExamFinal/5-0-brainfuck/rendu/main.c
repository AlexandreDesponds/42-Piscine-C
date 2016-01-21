/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 11:26:32 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 13:10:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "brainfuck.h"

int		brainfuck_end_while(char *op, char *brain, int i)
{
	int count;

	count = 1;
	if (*brain != 0)
	{
		i--;
		while (count != 0)
		{
			if (op[i] == ']')
				count++;
			if (op[i] == '[')
				count--;
			i--;
		}
	}
	return (i);
}

int		brainfuck_while(char *op, char *brain, int i)
{
	int count;

	count = 1;
	if (*brain == 0)
	{
		i++;
		while (count != 0)
		{
			if (op[i] == '[')
				count++;
			if (op[i] == ']')
			{
				count--;
			}
			i++;
		}
	}
	return (i);
}

void	brainfuck(char *op, char *brain)
{
	int i;

	i = 0;
	while (op[i] != '\0')
	{
		if (op[i] == '>')
			brain++;
		else if (op[i] == '<')
			brain--;
		else if (op[i] == '+')
			(*brain)++;
		else if (op[i] == '-')
			(*brain)--;
		else if (op[i] == '.')
			write(1, brain, 1);
		else if (op[i] == ']')
			i = brainfuck_end_while(op, brain, i);
		else if (op[i] == '[')
			i = brainfuck_while(op, brain, i);
		i++;
	}
}

void	ft_init(char *op)
{
	char *brain;

	brain = (char*)malloc(2048);
	brainfuck(op, brain);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_init(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
