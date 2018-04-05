/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:46:15 by alyle             #+#    #+#             */
/*   Updated: 2018/04/02 22:47:53 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

t_list	*ft_create_node(char c)
{
	t_list	*list;

	if ((list = (t_list*)malloc(sizeof(*list))))
	{
		list->next = NULL;
		list->data = c;
	}
	else
		return (NULL);
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
	t_list	*tmp;

	str = NULL;
	i = 0;
	if (list)
	{
		if ((str = (char*)malloc(sizeof(*str) * (len + 1))))
		{
			while (i < len)
			{
				str[i] = list->data;
				tmp = list;
				list = list->next;
				free(tmp);
				i++;
			}
			str[i] = '\0';
		}
		else
			return (NULL);
	}
	return (str);
}
