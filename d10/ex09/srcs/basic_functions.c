/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:20:57 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/26 21:20:59 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int nb);
void	ft_putnbr(int nb);

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	ft_putnbr(a / b);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	ft_putnbr(a % b);
	ft_putchar('\n');
}
