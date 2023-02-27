# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 17:07:02 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/27 19:54:33 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
TARGET = ft_tail.c
LIB = libft.a
SRCS = srcs/ft_display_file.o \
	   srcs/ft_getnum.o \
	   srcs/ft_putchar.o \
	   srcs/ft_puterr.o \
	   srcs/ft_putstr.o \
	   srcs/ft_tail_input.o
OBJS = ${SRCS:.c=.o}
HEADER = includes/
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all:	${NAME}

${NAME}:	${LIB}
			${CC} ${FLAGS} -I${HEADER} ${TARGET} ${LIB} -o ${NAME}

${LIB}:	${OBJS}
		ar -rcs ${LIB} ${OBJS}

${OBJS}:	%.o:%.c
			${CC} ${FLAGS} -I${HEADER} -c $< -o $@

clean:
		${RM} ${OBJS}
		${RM} ${LIB}

fclean:	clean
		${RM} ${NAME}

.PHONY: all clean fclean
