/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:12:32 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 20:12:37 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*node_ptr_prev;
	t_list	*node_ptr_curr;
	t_list	*node_ptr_next;

	node_ptr_prev = ((void*)0);
	node_ptr_next = ((void*)0);
	node_ptr_curr = begin_list;
	while (node_ptr_curr)
	{
		node_ptr_next = node_ptr_curr->next;
		node_ptr_curr->next = node_ptr_prev;
		node_ptr_prev = node_ptr_curr;
		node_ptr_curr = node_ptr_next;
	}
	begin_list = node_ptr_prev;
}



	// t_list	*node_ptr;
	// t_list	tmp_ptr;

	// node_ptr = *begin_list;
	// if (node_ptr)
	// {
	// 	while (node_ptr->next)
	// 	{
	// 		if ((*cmp)(node_ptr->data, (node_ptr->next)->data) > 0)
	// 		{
	// 			tmp_ptr.data = node_ptr->data;
	// 			node_ptr->data = (node_ptr->next)->data;
	// 			(node_ptr->next)->data = tmp_ptr.data;
	// 			node_ptr = *begin_list;
	// 		}
	// 		else
	// 			node_ptr = node_ptr->next;
	// 	}
	// }
