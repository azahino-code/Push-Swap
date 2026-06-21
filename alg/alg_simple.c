/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/21 20:32:25 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_selection(t_cll *stack_a, t_cll *stack_b, int bench)
{
	int		size;
	int		cost;
	int		pos;

	size = stack_a->size;
	cost = 0;
	while (size > 0)
	{
		pos = pos_index(stack_a, size - 1, size - 1);
		cost = ft_cost(pos, size);
		if (pos <= size / 2)
			while (cost-- > 0)
				ft_ra(stack_a, bench);
		else
			while (cost-- > 0)
				ft_rra(stack_a, bench);
		ft_pb(stack_a, stack_b, bench);
		size--;
	}
	return (stack_b);
}
