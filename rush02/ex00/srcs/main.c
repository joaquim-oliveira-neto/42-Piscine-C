/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bviseu-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 11:23:20 by bviseu-l          #+#    #+#             */
/*   Updated: 2018/04/01 14:31:39 by hemaes-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int		main(void)
{
	char	*input;
	int		str_size;
	int		row;
	int		col;

	input = ft_import_stdin();
	if (input == NULL)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	str_size = ft_strlen(input);
	row = ft_find_rows(input);
	col = ft_find_cols(str_size, row);
	find_type(input, col, row);
	ft_putchar('\n');
	return (0);
}
