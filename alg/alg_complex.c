/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:18 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/17 15:21:15 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_complex(t_cll *stack_a, t_cll *stack_b)
{
	int	bits = max_bits(stack_a->size - 1);
	indexer(stack_a);
}

int	max_bits(int max_num)
{
	int	bits;

	bits = 0;
	while (max_num > 0)
	{
		max_num = max_num / 2;
		bits++;
	}
	return (bits);
}

void	indexer(t_cll *stack)
{
	int		index;
	int		min;
	int		iterator;
	int		current_size;
	t_cll	aux;
	t_node	*node;
	
	(&aux)->head = NULL;
	(&aux)->size = 0;
	index = 0;
	while (stack->head)
	{
		node = stack->head;
		min = node->value;
		iterator = 0;
		current_size = stack->size;
		while (iterator < current_size)
		{
			if (min > node->value)
				min = node->value;
			node = node->next;
			iterator++;
		}
		while (stack->head->value != min)
			ft_ra(stack);
		stack->head->index = index;
		index++;
		ft_pb(stack, &aux);
	}
}