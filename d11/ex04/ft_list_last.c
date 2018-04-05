/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:33:31 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 19:33:33 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*node_ptr;

	if (!begin_list)
		return (((void*)0));
	node_ptr = begin_list;
	while (node_ptr->next)
		node_ptr = node_ptr->next;
	return (node_ptr);
}
