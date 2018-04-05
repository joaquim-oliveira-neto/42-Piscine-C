/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:39:22 by alyle             #+#    #+#             */
/*   Updated: 2018/04/02 20:18:01 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	is_valid_rows(char *str)
{
	int		i;
	int		colcount;

	i = 0;
	g_col = 0;
	colcount = 0;
	while (str[i])
	{
		colcount++;
		if (str[i] == '\n')
		{
			if (g_col == 0)
				g_col = colcount;
			else if (g_col != colcount)
				return (FALSE);
			colcount = 0;
		}
		i++;
	}
	return (TRUE);
}

int	is_valid_first_line(char *str, int size)
{
	int	i;

	g_filled = str[size - 2];
	g_obstacle = str[size - 3];
	g_empty = str[size - 4];
	if (g_filled == g_obstacle || g_filled == g_empty || g_obstacle == g_empty)
		return (0);
	i = 0;
	g_rows = 0;
	while (i < (size - 4))
	{
		if (!is_number(str[i]))
			return (0);
		g_rows = g_rows * 10 + str[i] - '0';
		i++;
	}
	if (g_rows == 0)
		return (0);
	return (1);
}
