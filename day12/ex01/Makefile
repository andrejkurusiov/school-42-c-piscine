# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 11:45:40 by akurusio          #+#    #+#              #
#    Updated: 2022/07/14 09:55:34 by akurusio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ./ft_cat.c

HEADER = ./*.h

all: ${NAME}

${NAME}:
	gcc -Wall -Wextra -Werror -o ${NAME} ${SRC} -I ${HEADER}

clean:

fclean: clean
	rm -f ${NAME}
