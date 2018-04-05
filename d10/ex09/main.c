/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:34:11 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/26 20:34:13 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/ft_opp.h"

void	do_operation(t_opp_ptr operation, int x, int y)
{
	operation(x, y);
}

char	*check_operator(char *str)
{
	if (ft_strcmp(str, "+") == 0 || ft_strcmp(str, "-") == 0 ||
		ft_strcmp(str, "/") == 0 || ft_strcmp(str, "*") == 0 ||
		ft_strcmp(str, "%") == 0)
		return (str);
	else
		return ("");
}

void	calculate(char *operator, int n1, int n2)
{
	int i;

	operator = check_operator(operator);
	i = 0;
	while (i < ARR_LEN)
	{
		if (ft_strcmp(g_opptab[i].o_sign, operator) == 0)
			do_operation(g_opptab[i].o_ft, n1, n2);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int				n1;
	int				n2;
	char			*operator;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	operator = argv[2];
	if (ft_strcmp(operator, "/") == 0 && n2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_strcmp(operator, "%") == 0 && n2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	calculate(operator, n1, n2);
	return (0);
}
