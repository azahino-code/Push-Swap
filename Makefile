# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: azahino- <azahino-@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/08 09:31:55 by azahino-            #+#    #+#             #
#   Updated: 2026/06/08 13:38:13 by azahino-           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = 
OBJ = $(SRC:.c=.o)

LIBFT_PATH = libft/libft.a

.PHONY: all clean fclean re

all: $(NAME)

$LIBFT_PATH:
	make -C ./libft

$(NAME): $(OBJ)
	cp $(LIBFT_PATH) $(NAME)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all