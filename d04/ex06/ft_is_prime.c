/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 20:14:00 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/17 20:14:02 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (0);
	divisor = nb / 2;
	while (nb % divisor != 0 || divisor == 1)
	{
		if (divisor == 1)
			return (1);
		divisor--;
	}
	return (0);
}
