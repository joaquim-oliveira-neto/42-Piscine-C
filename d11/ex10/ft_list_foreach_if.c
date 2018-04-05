/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:59:42 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 15:09:21 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*node_ptr;

	node_ptr = begin_list;
	while (node_ptr)
	{
		if ((*cmp)(node_ptr->data, data_ref) == 0)
			(*f)(node_ptr->data);
		node_ptr = node_ptr->next;
	}
}
