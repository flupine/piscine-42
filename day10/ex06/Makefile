# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: falupine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 15:23:16 by falupine          #+#    #+#              #
#    Updated: 2018/08/15 18:58:02 by falupine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = ./srcs/ft_putnbr.c ./srcs/ft_putchar.c ./srcs/ft_atoi.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/do_op.c
CC = gcc -Wall -Werror -Wextra
HEADERS = ./includes

all: $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(SRCS) -I $(HEADERS)

clean:
	@rm -rf $(NAME)

re: clean all
