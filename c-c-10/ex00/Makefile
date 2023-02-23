# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 17:07:02 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/23 17:37:13 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_desplay_file
SRCS = ./display_file.c
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

re:		fclean all

.PHONY: all clean fclean re .c.o
