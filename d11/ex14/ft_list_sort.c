/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:29:01 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 18:29:03 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*node_ptr;
	t_list	tmp_ptr;

	node_ptr = *begin_list;
	if (node_ptr)
	{
		while (node_ptr->next)
		{
			if ((*cmp)(node_ptr->data, (node_ptr->next)->data) > 0)
			{
				tmp_ptr.data = node_ptr->data;
				node_ptr->data = (node_ptr->next)->data;
				(node_ptr->next)->data = tmp_ptr.data;
				node_ptr = *begin_list;
			}
			else
				node_ptr = node_ptr->next;
		}
	}
}
