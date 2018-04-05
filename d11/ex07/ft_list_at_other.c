/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 09:05:34 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/28 09:05:36 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	t_list	*node_ptr;
	unsigned int	len;

	len = 0;
	node_ptr = begin_list;
	while (node_ptr)
	{
		len++;
		node_ptr = node_ptr->next;
	}
	return (len);
}

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	size;
	unsigned int	i;
	t_list			*node_ptr;

	node_ptr = ((void*)0);
	size = ft_list_size(begin_list);
	i = 0;
	if (nbr <= size)
	{
		node_ptr = begin_list;
		while (i < nbr)
		{
			node_ptr = node_ptr->next;
			i++;
		}
	}
	return (node_ptr);
}
