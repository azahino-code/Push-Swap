# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: azahino- <azahino-@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/08 09:31:55 by azahino-            #+#    #+#             #
#   Updated: 2026/06/08 09:40:57 by azahino-           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = 
OBJ = $(SRC:.c=.o)

SUBLIB_PATH = //hacer en el otro ordenador

MAKE = make

.PHONY: all clean fclean re

all: $(NAME)

s

$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all