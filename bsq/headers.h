/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:34:10 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/04/02 22:49:40 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_FIRST 5
# define TRUE 1
# define FALSE 0

typedef struct		s_list
{
	char				data;
	struct s_list		*next;
}					t_list;

char				g_empty;
char				g_obstacle;
char				g_filled;
int					g_rows;
int					g_col;
int					g_maxsize;
int					g_maxposition;

int					is_valid_rows(char *str);
char				*insert_square(char *str);
int					is_valid_first_line(char *str, int size);
char				*ft_import_file(char *file);
char				*ft_import_stdin(void);
int					ft_strcmp(char *s1, char *s2);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					is_number(char c);
void				solve_grid(char *str);
char				*ft_concat_list(t_list *list, int len);
void				ft_push_list(t_list **node, char c);
t_list				*ft_create_node(char c);
#endif
