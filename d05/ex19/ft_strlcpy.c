/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:52:06 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/19 23:52:09 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i == n)
	{
		dest[i] = '\0';
	}
	else
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = length(dest);
	len_s = length(src);
	if (size != 0)
	{
		if (len_s + 1 >= size)
		{
			ft_strncpy(dest, src, size - 1);
		}
		else
		{
			ft_strncpy(dest, src, len_s);
		}
	}
	return (len_s);
}
