/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:59:17 by alyle             #+#    #+#             */
/*   Updated: 2018/04/02 19:17:34 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*insert_square(char *str)
{
	int		cols;
	int		rows;

	rows = 0;
	while (rows <= g_maxsize)
	{
		cols = 0;
		while (cols <= g_maxsize)
		{
			str[g_maxposition + cols + rows * g_col] = g_filled;
			cols++;
		}
		rows++;
	}
	return (str);
}
