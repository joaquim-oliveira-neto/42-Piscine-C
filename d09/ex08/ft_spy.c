/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 11:49:43 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/23 11:49:44 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - ('A' - 'a');
		i++;
	}
	return (str);
}

char	*ft_trim(char *str)
{
	char	*t_arr;
	int		i;
	int		j;

	t_arr = str;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	j = 0;
	while ((!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) && str[i])
	{
		t_arr[j] = str[i];
		i++;
		j++;
	}
	t_arr[j] = '\0';
	return (t_arr);
}

int		main(int argc, char **argv)
{
	(void)argc;
	while (*argv)
	{
		*argv = ft_trim(*argv);
		*argv = ft_strlowcase(*argv);
		if (ft_strcmp(*argv, "president") == 0 ||
			ft_strcmp(*argv, "attack") == 0 ||
			ft_strcmp(*argv, "bauer") == 0)
		{
			ft_putstr("Alert!!!");
			ft_putstr("\n");
		}
		argv++;
	}
	return (0);
}
