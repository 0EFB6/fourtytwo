# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 17:07:02 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/27 13:33:30 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
SRCS = ft_tail.c
OBJS = ${SRCS:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o ${NAME}

${OBJS}:	%.o:%.c
			${CC} ${FLAGS} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

.PHONY: all clean fclean
