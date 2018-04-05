/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:43:04 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 14:43:06 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*node_ptr;

	node_ptr = begin_list;
	while (node_ptr)
	{
		(*f)(node_ptr->data);
		node_ptr = node_ptr->next;
	}
}
