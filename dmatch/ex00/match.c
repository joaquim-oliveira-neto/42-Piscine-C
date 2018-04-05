/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 11:00:37 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/24 11:00:39 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		last_occurancy_of_i(char *str, int i)
{
	int	j;

	j = length(str);
	while (str[j] != str[i])
		j--;
	return (j);
}

int		match(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		while (s2[j] == '*')
		{
			while ((s2[j + 1] != s1[i]) && s1[i])
				i++;
			i = last_occurancy_of_i(s1, i);
			j++;
		}
		if (s1[i] == s2[j] && s1[i])
		{
			i++;
			j++;
		}
		else if (s1[i] != s2[j])
			return (0);
	}
	return (1);
}
