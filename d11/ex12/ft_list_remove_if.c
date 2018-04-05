/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:20:28 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 15:20:29 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node_ptr_prev;
	t_list	*node_ptr_curr;
	t_list	*node_ptr_next;

	node_ptr_prev = *begin_list;
	node_ptr_next = ((void*)0);
	node_ptr_curr = *begin_list;
	while (node_ptr_curr)
	{
		node_ptr_next = node_ptr_curr->next;
		if ((*cmp)(node_ptr_curr->data, data_ref) == 0)
		{
			if (node_ptr_curr == *begin_list)
				*begin_list = node_ptr_next;
			else
				node_ptr_prev->next = node_ptr_next;
			free(node_ptr_curr);
			node_ptr_curr = node_ptr_prev->next;
		}
		else
		{
			node_ptr_prev = node_ptr_curr;
			node_ptr_curr = node_ptr_next;
		}
	}
}
