/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:13:25 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 10:13:27 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*node_ptr_prev;
	t_list	*node_ptr_curr;
	t_list	*node_ptr_next;

	node_ptr_prev = ((void*)0);
	node_ptr_next = ((void*)0);
	node_ptr_curr = *begin_list;
	while (node_ptr_curr)
	{
		node_ptr_next = node_ptr_curr->next;
		node_ptr_curr->next = node_ptr_prev;
		node_ptr_prev = node_ptr_curr;
		node_ptr_curr = node_ptr_next;
	}
	*begin_list = node_ptr_prev;
}
