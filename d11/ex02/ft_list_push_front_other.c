/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:49:14 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 18:49:16 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *fir_node_ptr;
	t_list *new_fir_node_ptr;

	new_fir_node_ptr = ft_create_elem(data);
	if (*begin_list)
	{	
		fir_node_ptr = *begin_list;
		*begin_list = new_fir_node_ptr;
		new_fir_node_ptr->next = fir_node_ptr;
	}
	else
		*begin_list = new_fir_node_ptr; 
}
