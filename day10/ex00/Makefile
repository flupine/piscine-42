# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falupine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 09:56:08 by falupine          #+#    #+#              #
#    Updated: 2018/08/15 10:20:43 by falupine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
CC = gcc -Wall -Werror -Wextra
HEADERS = ./includes

all: $(LIB)

$(LIB): obj
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

obj:
	$(CC) -c $(SRCS) -I $(HEADERS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(LIB)

re: fclean all
