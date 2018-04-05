/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:52:51 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/27 19:52:53 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*new_node_ptr;
	t_list	*begin_list_ptr;

	begin_list_ptr = ((void*)0);
	new_node_ptr = begin_list_ptr;
	i = 1;
	while (i < ac)
	{
		new_node_ptr = ft_create_elem(av[i]);
		new_node_ptr->next = begin_list_ptr;
		begin_list_ptr = new_node_ptr;
		i++;
	}
	return (new_node_ptr);
}
