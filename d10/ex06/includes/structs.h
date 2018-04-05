/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:51:11 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/26 19:51:13 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H
# include "headers.h"

typedef	int		(*t_operation_ptr)(int, int);
typedef	struct	s_operation_match
{
	char			*o_sign;
	t_operation_ptr	o_ft;
}				t_operation_match;

t_operation_match g_operation_table[] =
{
	{"+", &add},
	{"-", &sub},
	{"*", &mul},
	{"/", &div},
	{"%", &mod}
};

#endif
