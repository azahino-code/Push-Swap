/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:45:23 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/16 10:46:33 by jrecio-t         ###   ########.fr       */
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
}

void	ft_rrb(t_cll *b)
{
	ft_reverse(b);
}

void	ft_rrr(t_cll *a, t_cll *b)
{
	ft_rra(a);
	ft_rrb(b);
}