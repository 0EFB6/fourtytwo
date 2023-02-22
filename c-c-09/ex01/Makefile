# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 21:56:39 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/22 22:01:56 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

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

re:			fclean all

.PHONY:		all clean fclean re
