/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 20:11:36 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/17 20:11:46 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 0;
	if (nb < 0 || nb > 12)
		return (res);
	else
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}
