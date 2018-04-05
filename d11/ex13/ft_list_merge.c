/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:13:36 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 16:13:38 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*node_ptr;

	node_ptr = *begin_list1;
	if (node_ptr == ((void*)0))
		*begin_list1 = begin_list2;
	else
	{
		while (node_ptr->next)
			node_ptr = node_ptr->next;
		node_ptr->next = begin_list2;
	}
}
