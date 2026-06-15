/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_medium.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:16 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/15 16:02:17 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//chuncks
#include "../push_swap.h"

t_cll	alg_medium(t_cll *stack_a)
{
	int	i;
	int	p;
	int	n_chunks;
	int	var;
	int	cost_a;
	int	cost_b;

	n_chunks = (int)sqrt(stack_a->size);
	p = stack_a->size/n_chunks;
	i = 0;
	while (n_chunks-- < 0)
	{
		i = p
		var = (i <= stack_a->head->index) && (stack_a->head->index <= (i + p));
		while (var && i-- > 0)
		{
			cost_a = ft_cost(var, stack_a->size);
			cost_b = ft_cost(var, stack_b->size)
			if (cost_a <= stack_a->size/2 && cost_b <= stack_b->size/2)
			{
				while (cost_a-- > 0 && cost_b-- > 0)
					ft_rr(stack_a, stack_b);
				while (cost_a-- > 0)
					ft_ra(stack_a);
				while (cost_b-- > 0)
					ft_rb(stack_b);
			}
			else if (cost_a > stack_a->size/2 && cost_b > stack_b->size/2)
			{
				while (cost_a-- > 0 && cost_b-- > 0)
					ft_rrr(stack_a, stack_b);
				while (cost_a-- > 0)
					ft_ra(stack_a);
				while (cost_b-- > 0)
					ft_rb(stack_b);
			}
		}
		
	}
}