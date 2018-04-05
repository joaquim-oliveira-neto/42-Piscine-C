/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:00:48 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/21 19:00:50 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;
	int		i;
	int		j;
	int		k;
	int		size;

	size = 0;
	i = 1;
	while (i < argc)
		size += ft_strlen(argv[i++]) + 1;
	concat = (char*)malloc(sizeof(char) * size);
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			concat[k++] = argv[i][j++];
		concat[k] = '\n';
		k++;
		i++;
	}
	concat[k - 1] = '\0';
	return (concat);
}
