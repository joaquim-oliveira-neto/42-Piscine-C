# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 09:46:24 by jde-oliv          #+#    #+#              #
#    Updated: 2018/03/26 09:46:27 by jde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

MAINCFILE = main.c

SRCS = ./srcs/*.c

OFILES = *.o

GCCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(GCCFLAGS) $(MAINCFILE) $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all