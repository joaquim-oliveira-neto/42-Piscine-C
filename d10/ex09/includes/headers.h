/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:50:56 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/26 19:51:00 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# define ARR_LEN 6

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);

typedef	void	(*t_opp_ptr)(int, int);
typedef	struct	s_opp
{
	char		*o_sign;
	t_opp_ptr	o_ft;
}				t_opp;

#endif
