/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:21:49 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 19:21:51 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*node_ptr;
	int		len;

	len = 0;
	node_ptr = begin_list;
	while (node_ptr)
	{
		len++;
		node_ptr = node_ptr->next;
	}
	return (len);
}
