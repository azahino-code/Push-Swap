/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:45:23 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/22 14:19:49 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_reverse(t_cll *stack)
{
	stack->head = stack->head->prev;
}

void	ft_rra(t_cll *a)
{
	ft_reverse(a);
	if (a->bench == 1)
		ft_printf(1, "rra\n");
	a->moves[3]++;
	a->moves[11]++;
}

void	ft_rrb(t_cll *b)
{
	ft_reverse(b);
	if (b->bench == 1)
		ft_printf(1, "rrb\n");
	b->moves[4]++;
	b->moves[11]++;
}

void	ft_rrr(t_cll *a, t_cll *b)
{
	ft_reverse(a);
	ft_reverse(b);
	if (a->bench == 1)
		ft_printf(1, "rrr\n");
	a->moves[5]++;
	a->moves[11]++;
}
