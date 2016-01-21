/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 09:11:07 by adespond          #+#    #+#             */
/*   Updated: 2015/09/11 09:54:58 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SADASDAD_H
# define __SADASDAD_H

# include "ft_door.h"
# include <unistd.h>

# define TRUE	1
# define FALSE	0
# define OPEN	1
# define CLOSE	0
# define EXIT_SUCCESS	0

typedef	int		t_bool;
typedef	struct	s_door
{
	ft_bool state;
}				t_door;

#endif
