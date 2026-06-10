# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: jrecio-t <jrecio-t@student.42urduliz.com>    +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2026/06/08 09:31:55 by azahino-            #+#    #+#             #
#   Updated: 2026/06/09 15:33:58 by jrecio-t           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# Cambios:
# - NAME es el nombre del ejecutable generado tras compilar, por lo que no es un .a
# - Sustituida la instruccion 'ar' por 'cc' para compilar en vez de generar una libreria estatica(.a)
# - Añadido el path de printf

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Recomendable meter todos los .c en una carpeta /src
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