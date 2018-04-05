/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:01:28 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/21 19:01:31 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (max > min)
	{
		arr = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		*range = arr;
		return (i);
	}
	else
	{
		*range = ((void*)0);
		return (0);
	}
}
