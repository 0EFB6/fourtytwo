# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwei-she <cwei-she@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 21:43:51 by cwei-she          #+#    #+#              #
#    Updated: 2023/02/26 15:00:37 by cwei-she         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

LBRY_NAME = ft_lib.a

HEADER = includes/

SRCS = srcs/main.c \
	   srcs/ft_convert.c \
	   srcs/ft_open.c \
	   srcs/ft_run.c \
	   srcs/ft_convert_digit_three.c

OBJS = srcs/ft_lib/ft_check_number.o \
	   srcs/ft_lib/ft_error.o \
	   srcs/ft_lib/ft_iterative_power.o \
	   srcs/ft_lib/ft_itoa.o \
	   srcs/ft_lib/ft_nbrlen.o \
	   srcs/ft_lib/ft_putchar.o \
	   srcs/ft_lib/ft_putstr.o \
	   srcs/ft_lib/ft_strlen.o \
	   srcs/ft_lib/ft_strstr.o

CC = cc

CC_FLAGS = -Wall -Werror -Wextra

AR = ar

AR_FLAGS = -crs

RM = rm

RM_FLAGS = -rf

NORM = norminette

NORM_FLAGS = -R CheckDefine

all: ${NAME}

${NAME}:	${LBRY_NAME}
			${CC} ${CC_FLAGS} -I${HEADER} ${SRCS} ${LBRY_NAME} -o ${NAME}

${LBRY_NAME}:	${OBJS}
				${AR} ${AR_FLAGS} ${LBRY_NAME} $^

${OBJS}:	%.o:%.c
			${CC} ${CC_FLAGS} -c -I${HEADER} $< -o $@

clean:
			${RM} ${RM_FLAGS} ${OBJS} ${LBRY_NAME}

fclean:		clean
			${RM} ${RM_FLAGS} ${NAME}

norm:
			${NORM} ${NORM_FLAGS}

re:			fclean all

.PHONY:		all clean fclean re
