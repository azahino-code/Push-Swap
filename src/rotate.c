/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:22:24 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/18 12:18:45 by jrecio-t         ###   ########.fr       */
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
}

void	ft_rb(t_cll *b)
{
	ft_rotate(b);
}

void	ft_rr(t_cll *a, t_cll *b)
{
	ft_ra(a);
	ft_rb(b);
}
