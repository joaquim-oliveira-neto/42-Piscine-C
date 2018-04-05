/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:23:34 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/29 11:23:37 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 100

void	ft_putchar(char c);
void	ft_putchar_err(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	ft_putnbr(int nb);

#endif
