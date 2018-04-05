/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:30:27 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/04/02 21:42:02 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	bsq(char *str)
{
	if (str && is_valid_rows(str))
	{
		g_maxsize = -1;
		g_maxposition = -1;
		solve_grid(str);
		if (g_maxsize >= 0)
		{
			insert_square(str);
		}
		ft_putstr(str);
		free(str);
	}
	else
		write(2, "map error\n", 10);
	return (0);
}

int	main(int argc, char **argv)
{
	char *str;

	if (argc == 1)
	{
		str = ft_import_stdin();
		bsq(str);
	}
	else
	{
		argv++;
		while (argc != 1)
		{
			str = ft_import_file(*argv);
			bsq(str);
			if (argc > 2)
				write(1, "\n", 1);
			argc--;
			argv++;
		}
	}
	return (0);
}
