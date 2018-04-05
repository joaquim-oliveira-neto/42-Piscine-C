/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:07:21 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/22 22:07:23 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate_character(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (c + 16 > 'Z')
			return (c - 10);
		else
			c = c + 16;
	}
	else if (c >= 'a' && c <= 'z')
	{
		if (c + 16 > 'z')
			return (c - 10);
		else
			c = c + 16;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate_character(str[i]);
		i++;
	}
	return (str);
}
