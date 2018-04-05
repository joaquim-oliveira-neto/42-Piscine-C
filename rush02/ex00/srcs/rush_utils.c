/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 21:04:16 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/04/01 22:45:25 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_find_rows(char *str)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			row++;
		i++;
	}
	return (row);
}

int		ft_find_cols(int len, int row)
{
	return ((len - row) / row);
}

void	find_type(char *str, int col, int row)
{
	int	match;

	match = 0;
	if (ft_strcmp(str, ft_rush00(col, row)) == 0)
		display(col, row, 0, ++match);
	if (ft_strcmp(str, ft_rush01(col, row)) == 0)
		display(col, row, 1, ++match);
	if (ft_strcmp(str, ft_rush02(col, row)) == 0)
		display(col, row, 2, ++match);
	if (ft_strcmp(str, ft_rush03(col, row)) == 0)
		display(col, row, 3, ++match);
	if (ft_strcmp(str, ft_rush04(col, row)) == 0)
		display(col, row, 4, ++match);
	if (match == 0)
		ft_putstr("aucune");
}

void	display(int col, int row, int id, int match)
{
	if (match > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(id);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("]");
}
