/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:22:24 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/21 20:58:44 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(t_cll *stack)
{
	stack->head = stack->head->next;
}

void	ft_ra(t_cll *a, int bench)
{
	ft_rotate(a);
	if (bench == 1)
		ft_printf(1, "ra");
	a->moves[0]++;
}

void	ft_rb(t_cll *b, int bench)
{
	ft_rotate(b);
	if (bench == 1)
		ft_printf(1, "rb");
	b->moves[1]++;
}

void	ft_rr(t_cll *a, t_cll *b, int bench)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (bench == 1)
		ft_printf(1, "rr");
	a->moves[2]++;
}
