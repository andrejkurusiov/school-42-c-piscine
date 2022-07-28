# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 11:45:40 by akurusio          #+#    #+#              #
#    Updated: 2022/07/11 13:50:19 by akurusio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HEADER = ./includes

all: ${NAME}

${NAME}:
	gcc -c ${SRC} -I ${HEADER} && ar -rc ${NAME} ft_*.o

clean:
	rm -f ft_*.o

fclean: clean
	rm -f ${NAME}

re: fclean all
