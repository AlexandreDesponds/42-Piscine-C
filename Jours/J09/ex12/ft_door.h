/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 09:11:07 by adespond          #+#    #+#             */
/*   Updated: 2015/09/11 09:56:35 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_DOOR_H
# define __FT_DOOR_H

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
	t_bool state;
}				t_door;
t_bool			open_door(t_door *door);
t_bool			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
#endif
