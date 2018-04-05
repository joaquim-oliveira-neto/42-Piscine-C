/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 20:39:10 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/18 20:39:15 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	choose_character(int line, int col, int width, int length)
{
	if ((line == 1 || line == length) && col == 1)
		ft_putchar('A');
	else if (col == 1)
		ft_putchar('B');
	else if ((line == 1 || line == length) && col == width)
		ft_putchar('C');
	else if (col == width)
		ft_putchar('B');
	else if (line == 1 || line == length)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	if (!(x <= 0 || y <= 0))
	{
		line = 1;
		while (line <= y)
		{
			col = 1;
			while (col <= x)
			{
				choose_character(line, col, x, y);
				col++;
			}
			ft_putchar('\n');
			line++;
		}
	}
}
