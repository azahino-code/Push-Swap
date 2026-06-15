/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:43:09 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/15 09:52:16 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# include "printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_cll
{
	int				size;
	t_node			*head;
}					t_cll;

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef enum mode
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}			mode;

void	ft_assignment(int argc, char **argv, t_cll *stack_a);
void	ft_count_flags(char **argv, mode *mode, int *count, int bench);
float	compute_disorder(t_cll *a);

#endif