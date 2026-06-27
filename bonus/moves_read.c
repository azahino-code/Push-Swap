/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_read.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:08:27 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/27 20:12:11 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_move_reads(t_cll *stack_a, t_cll *stack_b, char *move)
{
	if (ft_strcmp(move, "ra"))
		ft_ra(stack_a);
	else if (ft_strcmp(move, "rb"))
		ft_rb(stack_b);
	else if (ft_strcmp(move, "rr"))
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(move, "pa"))
		ft_pa(stack_b, stack_a);
	else if (ft_strcmp(move, "pb"))
		ft_pb(stack_a, stack_b);
	else if (ft_strcmp(move, "rra"))
		ft_rra(stack_a);
	else if (ft_strcmp(move, "rrb"))
		ft_rrb(stack_b);
	else if (ft_strcmp(move, "rrr"))
		ft_rrr(stack_a, stack_b);
	else if (ft_strcmp(move, "sa"))
		ft_sa(stack_a);
	else if (ft_strcmp(move, "sb"))
		ft_sb(stack_b);
	else if (ft_strcmp(move, "ss"))
		ft_ss(stack_a, stack_b);
}

int	ft_is_sorted(t_cll *stack_a)
{
	int	i;
	t_node	*ptr;
	t_node	*ptr_next;
	
	ptr = stack_a->head;
	ptr_next = stack_a->head->next;
	i = 0;
	while (i < stack_a->size - 1)
	{
		if (ptr->index > ptr_next->index)
			return (0);
		i++;
		ptr_next = ptr_next->next;
	}
	return (1);
}
