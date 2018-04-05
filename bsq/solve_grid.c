/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:39:57 by alyle             #+#    #+#             */
/*   Updated: 2018/04/02 19:18:46 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		get_size(char *str, int start, int size)
{
	int		x;

	x = 0;
	if (start + (g_col * size) + size > g_col * g_rows)
		return (size - 1);
	while (x < size)
	{
		if (str[start + (g_col * size) + x] != g_empty)
			return (size - 1);
		x++;
	}
	if (str[start + (g_col * size) + x] != g_empty)
		return (size - 1);
	while (x > 0)
	{
		if (str[start + (g_col * (size - x)) + size] != g_empty)
			return (size - 1);
		x--;
	}
	return (get_size(str, start, size + 1));
}

void	solve_grid(char *str)
{
	int		size;
	int		i;

	i = 0;
	while (str[i])
	{
		if (i / g_col + g_maxsize + 1 >= g_rows)
			return ;
		if (i % g_col + g_maxsize + 2 < g_col)
		{
			if (str[i] == g_empty)
			{
				size = 0;
				size = get_size(str, i, size + 1);
				if (size > g_maxsize)
				{
					g_maxsize = size;
					g_maxposition = i;
				}
			}
			i++;
		}
		else
			i = ((i / g_col + 1) * g_col);
	}
}
