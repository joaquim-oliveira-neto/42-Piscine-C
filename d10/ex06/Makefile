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

NAME = do-op

MAINCFILE = main.c

LIBNAME = libft.a

SRCS = ./srcs/*.c

OFILES = *.o

GCCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): create_library
	@gcc $(GCCFLAGS) $(MAINCFILE) -L . $(LIBNAME) -o $(NAME)

create_library: create_o_files
	@ar -rc $(LIBNAME) $(OFILES)
	@ranlib $(LIBNAME)

create_o_files:
	@gcc $(GCCFLAGS) -c $(SRCS) 

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(LIBNAME)
	@/bin/rm -f $(NAME)

re: fclean all
