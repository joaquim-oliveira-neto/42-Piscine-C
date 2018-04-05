/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:17:03 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/21 19:17:06 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		words_count;
	int		word_size;
	char	**arr;
	char	*word;


	words_count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			words_count++;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			{
				i++;
			}
		}
	}
	arr = (char**)malloc((sizeof(char*) * words_count) + sizeof(0));
	j = 0;
	if (words_count > 0)
	{
		i = 0;
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			word_size = 0;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			{
				word_size++;
				i++;
			}
			if (word_size != 0)
			{
				word = (char*)malloc((sizeof(char) * (word_size + 1)));
				arr[j] = word;
				j++;		
			}	
		}
		j = 0;
		i = 0;
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			{
				k = 0;
				while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
				{
					arr[j][k++] = str[i++];
				}
				arr[j][k] = '\0';
				j++;
			}
		}
	}
	arr[j] = 0;
	return (arr);
}
