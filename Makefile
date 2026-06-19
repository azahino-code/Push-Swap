# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: azahino- <azahino-@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/08 09:31:55 by azahino-            #+#    #+#             #
#   Updated: 2026/06/19 08:22:47 by azahino-           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBS = -lm

CC = cc
CFLAGS = -g -Wall -Werror -Wextra # -g temporal

SRC = src/main.c src/disorder.c src/arg_assignment.c src/utils_alg.c src/utils_list.c \
src/utils_str.c alg/alg_medium.c alg/alg_simple.c alg/alg_complex.c alg/alg_adaptive.c \
src/push.c src/swap.c src/rotate.c src/reverse.c src/bench.c

OBJ = $(SRC:.c=.o)

PRINTF_PATH = printf/libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)
	
$(PRINTF_PATH):
	make -C printf

$(NAME): $(OBJ) $(PRINTF_PATH)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF_PATH) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C printf clean

fclean: clean
	rm -f $(NAME)
	make -C printf fclean

re: fclean all