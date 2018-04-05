/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:13:22 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/23 15:13:24 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 1
# define OPEN 0
# define TRUE 1
# define FALSE 0
# define EXIT_SUCCESS 0
# include <unistd.h>

typedef	int		t_bool;

typedef	struct	s_door
{
	int state;
}				t_door;

void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
#endif
