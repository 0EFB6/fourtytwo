# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 21:43:51 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/25 23:54:26 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

LBRY_NAME = ft_lib.a

SRCS = srcs/main.c \
	   srcs/ft_convert.c \
	   srcs/ft_open.c \
	   srcs/ft_run.c 

OBJS = srcs/ft_lib/ft_atoi.o \
	   srcs/ft_lib/ft_calloc.o \
	   srcs/ft_lib/ft_char_is_digit.o \
	   srcs/ft_lib/ft_char_is_printable.o \
	   srcs/ft_lib/ft_char_is_space.o \
	   srcs/ft_lib/ft_check_arg_number.o \
	   srcs/ft_lib/ft_check_number.o \
	   srcs/ft_lib/ft_error.o \
	   srcs/ft_lib/ft_iterative_power.o \
	   srcs/ft_lib/ft_itoa.o \
	   srcs/ft_lib/ft_nbrlen.o \
	   srcs/ft_lib/ft_putchar.o \
	   srcs/ft_lib/ft_putstr.o \
	   srcs/ft_lib/ft_str_is_number.o \
	   srcs/ft_lib/ft_strcat.o \
	   srcs/ft_lib/ft_strcmp.o \
	   srcs/ft_lib/ft_strcpy.o \
	   srcs/ft_lib/ft_strdup.o \
	   srcs/ft_lib/ft_strlen.o \
	   srcs/ft_lib/ft_strncpy.o \
	   srcs/ft_lib/ft_strstr.o

HEADER = includes/

all: ${NAME}

${NAME}:	${LBRY_NAME}
			cc -Wall -Werror -Wextra -I${HEADER} ${SRCS} ${LBRY_NAME} -o ${NAME}

${LBRY_NAME}:	${OBJS}
				ar -crs ${LBRY_NAME} $^

${OBJS}:	%.o:%.c
			cc -Wall -Werror -Wextra -c -I${HEADER} $< -o $@

clean:
			rm -rf ${OBJS} ${LBRY_NAME}

fclean:		clean
			rm -f ${NAME}

#norm:
#			${NORMINETTE} ${NORM}

re:			fclean all

.PHONY:		all clean fclean re
