/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:22:24 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/22 14:20:48 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(t_cll *stack)
{
	stack->head = stack->head->next;
}

void	ft_ra(t_cll *a)
{
	ft_rotate(a);
	if (a->bench == 1)
		ft_printf(1, "ra\n");
	a->moves[0]++;
	a->moves[11]++;
}

void	ft_rb(t_cll *b)
{
	ft_rotate(b);
	if (b->bench == 1)
		ft_printf(1, "rb\n");
	b->moves[1]++;
	b->moves[11]++;
}

void	ft_rr(t_cll *a, t_cll *b)
{
	ft_rotate(a);
	ft_rotate(b);
	if (a->bench == 1)
		ft_printf(1, "rr\n");
	a->moves[2]++;
	a->moves[11]++;
}
