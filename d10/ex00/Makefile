# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 09:46:24 by jde-oliv          #+#    #+#              #
#    Updated: 2018/03/27 22:29:51 by jde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c  ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c \
	   ./srcs/ft_strlen.c  ./srcs/ft_swap.c

OFILES = ft_putchar.o  ft_putstr.o  ft_strcmp.o  ft_strlen.o  ft_swap.o

INCLUDES = ./includes/

all: $(NAME)

$(NAME): create_o_files
	ar -rc $(NAME) $(OFILES)
	ranlib $(NAME)

create_o_files:
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
