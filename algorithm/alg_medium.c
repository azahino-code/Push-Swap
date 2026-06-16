/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_medium.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:16 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/16 09:53:02 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//chuncks
#include "../push_swap.h"

t_cll	*alg_medium(t_cll *stack_a, t_cll *stack_b, int n_chunks)
{
	int	i; //contador
	int start;
	int end;
	int	mid;
	int	c_size;
	int	pos_a;

	c_size = stack_a->size/n_chunks;
	i = 0;
	while (i < n_chunks)
	{
		start = i * c_size;
		end = start + c_size - 1;
		mid = (start + end) / 2;
		while (start <= end)
		{
			if (stack_a->head->index >= (i*c_size) && stack_a->head->index <= end)
			{
				ft_pb(stack_a, stack_b);
				if (stack_b->head && stack_b->head->index <= mid)
					ft_rb (stack_b);
				else if (stack_b->head && stack_b->head->index > mid)
					ft_rrb(stack_b);
				start++;
			}
			else
			{
				pos_a = pos_index(stack_a, (i*c_size), end);
				if ((stack_b->head && stack_b->head->index <= mid)
				&& pos_a <= stack_a->size / 2)
					ft_rr(stack_a, stack_b);
				else if ((stack_b->head && stack_b->head->index > mid)
				&& pos_a > stack_a->size / 2)
					ft_rrr(stack_a, stack_b);
				else
					ft_ra(stack_a);
			}
		}
		i++;
	}
	return (alg_selection(stack_b));
}
