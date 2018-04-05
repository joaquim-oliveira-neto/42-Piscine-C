/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemaes-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 11:50:19 by hemaes-r          #+#    #+#             */
/*   Updated: 2018/04/01 22:46:17 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_list
{
	struct s_list	*next;
	char			data;
}				t_list;

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			*ft_rush00(int x, int y);
char			*ft_rush01(int x, int y);
char			*ft_rush02(int x, int y);
char			*ft_rush03(int x, int y);
char			*ft_rush04(int x, int y);
char			*ft_import_stdin(void);
char			*ft_concat_list(t_list *list, int len);
void			ft_push_list(t_list **first, char c);
t_list			*ft_create_list(char c);
int				ft_strlen(char *str);
int				ft_find_rows(char *str);
int				ft_find_cols(int len, int row);
void			find_type(char *str, int col, int row);
void			display(int col, int row, int id, int match);

#endif
