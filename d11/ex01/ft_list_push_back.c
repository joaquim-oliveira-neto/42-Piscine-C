/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:50:41 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 15:50:43 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node_ptr;

	if (*begin_list)
	{
		node_ptr = *begin_list;
		while (node_ptr->next)
			node_ptr = node_ptr->next;
		node_ptr->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
