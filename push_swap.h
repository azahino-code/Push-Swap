/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:43:09 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/16 12:43:04 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# include "printf/ft_printf.h"		

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_cll
{
	int				size;
	t_node			*head;
}					t_cll;

typedef enum mode
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}			mode;

void	ft_assignment(int argc, char **argv, t_cll *stack_a);
void	ft_count_flags(char **argv, mode *mode, int *count, int bench);
t_node	*ft_lstnew(int val);
void	ft_lstadd_back(t_cll *lst, t_node *new);
float	compute_disorder(t_cll *a);
int		ft_atoi(const char *nptr);

#endif