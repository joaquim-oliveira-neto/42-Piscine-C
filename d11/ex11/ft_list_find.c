/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:11:56 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 15:11:58 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node_ptr;

	node_ptr = begin_list;
	while (node_ptr)
	{
		if ((*cmp)(node_ptr->data, data_ref) == 0)
			return (node_ptr);
		node_ptr = node_ptr->next;
	}
	return (((void*)0));
}
