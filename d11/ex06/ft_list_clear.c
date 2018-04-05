/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:15:12 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 21:15:13 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *node_ptr_to_erase;

	while (*begin_list)
	{
		node_ptr_to_erase = *begin_list;
		*begin_list = (*begin_list)->next;
		free(node_ptr_to_erase);
	}
}
