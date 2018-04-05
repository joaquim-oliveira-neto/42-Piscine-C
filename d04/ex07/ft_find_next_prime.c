/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 20:14:17 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/17 20:14:19 by jde-oliv         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int nextprime;

	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	nextprime = nb;
	if (nb % 2 == 0)
		nextprime = nb + 1;
	while (nextprime < 2147483647)
	{
		if (ft_is_prime(nextprime))
			return (nextprime);
		nextprime += 2;
	}
	return (-1);
}
