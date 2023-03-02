# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jialiew <jialiew@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:31:08 by jialiew           #+#    #+#              #
#    Updated: 2023/03/02 13:21:54 by jialiew          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
SRC = array_op.c function.c main.c
SRCS = ${addprefix $(SDIR), $(SRC)}
HDIR = ./includes/
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
OBJECT = ${SRCS:.c=.o}
OUTPUT = do-op
CFLAGS = -Wall -Wextra -Werror
CC = cc

.PHONY: all clean fclean re

all:
	${CC} ${CFLAGS} -I ${HDIR} ${SRCS} -o ${OUTPUT}

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all
