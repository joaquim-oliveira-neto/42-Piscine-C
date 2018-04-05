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
#include "includes/structs.h"

int	do_operation(t_operation_ptr operation, int x, int y)
{
	return (operation(x, y));
}

int	check_operator(char *str)
{
	if (ft_strcmp(str, "+") == 0 || ft_strcmp(str, "-") == 0 ||
		ft_strcmp(str, "/") == 0 || ft_strcmp(str, "*") == 0 ||
		ft_strcmp(str, "%") == 0)
		return (1);
	return (0);
}

int	calculate(char *operator, int n1, int n2)
{
	int i;

	if (check_operator(operator) == 1)
	{
		i = 0;
		while (i < ARR_LEN)
		{
			if (ft_strcmp(g_operation_table[i].o_sign, operator) == 0)
				return (do_operation(g_operation_table[i].o_ft, n1, n2));
			i++;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
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
	ft_putnbr(calculate(operator, n1, n2));
	ft_putchar('\n');
	return (0);
}
