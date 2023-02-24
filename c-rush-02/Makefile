# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 21:43:51 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/24 21:49:51 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

OBJS = srcs/ft_

HEADER = includes/

all: ${NAME}

${NAME}:	${OBJS}
			ar -crs ${NAME} $^

${OBJS}:	%.o:%.c
			gcc -Wall -Werror -Wextra -c -I${HEADER} $< -o $@

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -f ${NAME}

norm;
			${NORMINETTE} ${NORM

re:			fclean all

.PHONY:		all clean fclean re
