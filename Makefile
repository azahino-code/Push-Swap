# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: jrecio-t <jrecio-t@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/08 09:31:55 by azahino-            #+#    #+#             #
#   Updated: 2026/06/10 17:28:52 by jrecio-t           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = src/main.c src/disorder.c src/moves.c
OBJ = $(SRC:.c=.o)

LIBFT_PATH = libft/libft.a
PRINTF_PATH = printf/libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)

$(LIBFT_PATH):
	make -C libft
	
$(PRINTF_PATH):
	make -C printf

$(NAME): $(OBJ) $(LIBFT_PATH) $(PRINTF_PATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_PATH) $(PRINTF_PATH) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C libft clean
	make -C printf clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	make -C printf fclean

re: fclean all