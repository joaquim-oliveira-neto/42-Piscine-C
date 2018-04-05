/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:44:04 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/04/01 22:48:35 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

t_list	*ft_create_node(char c)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->next = NULL;
	list->data = c;
	return (list);
}

void	ft_push_list(t_list **node, char c)
{
	t_list	*list;

	list = *node;
	if (!list)
	{
		*node = ft_create_node(c);
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_node(c);
}

char	*ft_concat_list(t_list *list, int len)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	if (list)
	{
		str = (char*)malloc(sizeof(*str) * (len + 1));
		while (i < len)
		{
			str[i] = list->data;
			list = list->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char	*ft_import_stdin(void)
{
	t_list	*list;
	char	buf;
	char	*str;
	int		str_size;

	list = NULL;
	str = NULL;
	str_size = 0;
	while (read(0, &buf, 1) > 0)
	{
		ft_push_list(&list, buf);
		str_size++;
	}
	str = ft_concat_list(list, str_size);
	return (str);
}
