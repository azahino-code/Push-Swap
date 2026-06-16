/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/16 16:45:27 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_selection(t_cll *stack_a, t_cll *stack_b)
{
	int		size;
	int		cost;
	int		pos;

	stack_b->head = NULL;
	stack_b->size = 0;
	size = stack_a->size;
	cost = 0;
	while (size-- > 0)
	{
		pos = pos_index(stack_a, size - 1, size - 1);
		cost = ft_cost(pos, size);
		if (pos <= size / 2)
			while (cost-- > 0)
				ft_ra(stack_a);
		else
			while (cost-- > 0)
				ft_rra(stack_a);
		ft_pa(stack_a, stack_b);
	}
	return (stack_b);
}
