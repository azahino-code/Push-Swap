/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/16 09:53:20 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	alg_selection(t_cll *stack_a)
{
	t_cll	aux;
	int		size;
	int		cost;
	int		pos;

	aux.head = NULL;
	aux.size = 0;
	size = stack_a->size;
	cost = 0;
	while (size-- > 0)
	{
		pos = pos_index(stack_a, size - 1, size - 1);
		cost = ft_cost(pos, size);
		if (pos <= size / 2)
			while (cost-- > 0)
				ft_ra();
		else
			while (cost-- > 0)
				ft_rra();
		ft_pa();
	}
}
