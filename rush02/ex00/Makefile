# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemaes-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 12:12:28 by hemaes-r          #+#    #+#              #
#    Updated: 2018/04/01 22:08:08 by jde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
SRCS = main.c print_utils.c rush_utils.c import_utils.c ft_rushes.c 
OUTS = main.o print_utils.o rush_utils.o import_utils.o ft_rushes.o  

all: $(NAME)

$(NAME):
	@$(CC) -c $(INCLUDE) $(SRC) 
	@$(CC) $(FLAGS) $(OUTS) -o $(NAME) 

clean:
	@/bin/rm -f $(OUTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
