/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:23:01 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/29 11:23:04 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"

int	is_input_valid(int argc)
{
	if (argc == 1)
	{
		ft_puterr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (0);
	}
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	if (!is_input_valid(argc))
		return (1);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		return (0);
	}
}
