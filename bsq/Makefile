# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyle <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 11:28:47 by alyle             #+#    #+#              #
#    Updated: 2018/04/02 22:45:11 by alyle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

LIBNAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS = comparison_utils.c import_utils.c insert_square.c main.c print_utils.c \
	   solve_grid.c validation_utils.c linkedlist_utils.c

OBJ = comparison_utils.o import_utils.o insert_square.o main.o print_utils.o \
	  solve_grid.o validation_utils.o linkedlist_utils.o


all: $(NAME)

$(NAME): $(LIBNAME)
	@gcc $(GCCFLAGS) -o $(NAME) -L . $(LIBNAME)

$(LIBNAME):
	@gcc $(GCCFLAGS) -c $(SRCS)
	@ar rc $(LIBNAME) $(OBJ)
	@ranlib $(LIBNAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBNAME)

re: fclean all
