/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:32:12 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/23 11:32:20 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		else
			return (1 + ft_collatz_conjecture(base * 3 + 1));
	}
	return (0);
}
