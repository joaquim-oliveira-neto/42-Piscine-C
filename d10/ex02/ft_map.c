/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:29:45 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/26 11:29:46 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*restab;

	restab = (int*)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		restab[i] = f(tab[i]);
		i++;
	}
	return (restab);
}
