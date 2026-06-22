/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:45:23 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/22 10:28:21 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_reverse(t_cll *stack)
{
	stack->head = stack->head->prev;
}

void	ft_rra(t_cll *a, int bench)
{
	ft_reverse(a);
	if (bench == 1)
		ft_printf(1, "rra\n");
	a->moves[3]++;
	a->moves[11]++;
}

void	ft_rrb(t_cll *b, int bench)
{
	ft_reverse(b);
	if (bench == 1)
		ft_printf(1, "rrb\n");
	b->moves[4]++;
	b->moves[11]++;
}

void	ft_rrr(t_cll *a, t_cll *b, int bench)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (bench == 1)
		ft_printf(1, "rrr\n");
	a->moves[5]++;
	a->moves[11]++;
}
