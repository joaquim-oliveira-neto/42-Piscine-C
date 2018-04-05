/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 09:34:58 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/21 09:35:00 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *src)
{
	int len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dest, char *src, int length)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < (length + 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;

	length = len(src);
	copy = (char*)malloc(sizeof(*src) * (length + 1));
	ft_strcpy(copy, src, length);
	return (copy);
}
