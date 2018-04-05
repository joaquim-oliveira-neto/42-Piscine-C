/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:30:47 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/04/02 22:47:50 by alyle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_import_first_line(int fd)
{
	t_list	*list;
	char	buf;
	int		str_size;

	list = NULL;
	str_size = 0;
	while (read(fd, &buf, 1) > 0)
	{
		str_size++;
		ft_push_list(&list, buf);
		if (buf == '\n')
			break ;
	}
	if (is_valid_first_line(ft_concat_list(list, str_size), str_size))
		return (1);
	return (0);
}

char	*ft_import_stdin(void)
{
	t_list	*list;
	char	buf;
	int		str_size;

	if (ft_import_first_line(0))
	{
		list = NULL;
		str_size = 0;
		while (read(0, &buf, 1) > 0)
		{
			ft_push_list(&list, buf);
			str_size++;
		}
		return (ft_concat_list(list, str_size));
	}
	return (NULL);
}

char	*ft_import_file(char *file)
{
	t_list	*list;
	char	buf;
	int		str_size;
	int		fd;

	fd = open(file, O_RDONLY);
	if (ft_import_first_line(fd))
	{
		list = NULL;
		str_size = 0;
		while (read(fd, &buf, 1) > 0)
		{
			ft_push_list(&list, buf);
			str_size++;
		}
		close(fd);
		return (ft_concat_list(list, str_size));
	}
	return (NULL);
}
