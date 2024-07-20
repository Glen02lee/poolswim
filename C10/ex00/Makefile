# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 19:33:38 by mlee              #+#    #+#              #
#    Updated: 2024/07/14 19:33:46 by mlee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR	= ./srcs/
SRCNAME	= display_file.c
SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
