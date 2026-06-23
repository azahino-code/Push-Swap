/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/23 17:01:22 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_simple(t_cll *stack_a, t_cll *stack_b)
{
	int		size;
	int		cost;
	int		pos;

	size = stack_a->size;
	cost = 0;
	while (size > 0)
	{
		pos = ft_pos_index(stack_a, size - 1, size - 1);
		cost = ft_cost(pos, size);
		if (pos <= size / 2)
			while (cost-- > 0)
				ft_ra(stack_a);
		else
			while (cost-- > 0)
				ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
		size--;
	}
	ft_addition(stack_b, stack_a);
	return (stack_b);
}
