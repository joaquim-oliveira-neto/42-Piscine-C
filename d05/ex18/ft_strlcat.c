/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:08:54 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/19 21:08:56 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	length(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	final_size;

	len_d = length(dest);
	len_s = length(src);
	final_size = len_d + len_s;
	if (len_d + 1 >= size)
	{
		return (size + len_s);
	}
	else
	{
		if (size < (final_size + 1))
			ft_strncat(dest, src, size - (1 + len_d));
		else
			ft_strncat(dest, src, len_s);
		return (len_d + len_s);
	}
}
