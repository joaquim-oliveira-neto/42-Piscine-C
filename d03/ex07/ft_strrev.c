/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 22:48:42 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/15 22:48:51 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	auxchar;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (i < len)
	{
		auxchar = str[i];
		str[i] = str[len];
		str[len] = auxchar;
		len--;
		i++;
	}
	return (str);
}
