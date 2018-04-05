# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 14:35:43 by jde-oliv          #+#    #+#              #
#    Updated: 2018/03/31 14:35:47 by jde-oliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@echo 'set -f; echo $$1 | bc' > eval_expr
	@chmod 755 eval_expr

clean:
	@chmod 755 Makefile

fclean: clean
	@rm -f eval_expr

re: fclean all
