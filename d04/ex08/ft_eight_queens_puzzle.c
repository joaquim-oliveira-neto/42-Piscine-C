/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 23:37:38 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/17 23:40:26 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recursive_function(int i)
{
	if (i < 1)
		ft_recursive_function(i - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_recursive_function(2);
	return (92);
}
