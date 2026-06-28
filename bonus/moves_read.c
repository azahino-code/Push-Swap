/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_read.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:08:27 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/28 16:45:51 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_move_reads(t_cll *stack_a, t_cll *stack_b, char *move)
{
	if (ft_strcmp(move, "ra") == 0 && ft_strlen(move) == 3)
		ft_ra(stack_a);
	else if (ft_strcmp(move, "rb") == 0 && ft_strlen(move) == 3)
		ft_rb(stack_b);
	else if (ft_strcmp(move, "rr") == 0 && ft_strlen(move) == 3)
		ft_rr(stack_a, stack_b);
	else if (ft_strcmp(move, "pa") == 0 && ft_strlen(move) == 3)
		ft_pa(stack_a, stack_b);
	else if (ft_strcmp(move, "pb") == 0 && ft_strlen(move) == 3)
		ft_pb(stack_a, stack_b);
	else if (ft_strcmp(move, "rra") == 0 && ft_strlen(move) == 4)
		ft_rra(stack_a);
	else if (ft_strcmp(move, "rrb") == 0 && ft_strlen(move) == 4)
		ft_rrb(stack_b);
	else if (ft_strcmp(move, "rrr") == 0 && ft_strlen(move) == 4)
		ft_rrr(stack_a, stack_b);
	else if (ft_strcmp(move, "sa") == 0 && ft_strlen(move) == 3)
		ft_sa(stack_a);
	else if (ft_strcmp(move, "sb") == 0 && ft_strlen(move) == 3)
		ft_sb(stack_b);
	else if (ft_strcmp(move, "ss") == 0 && ft_strlen(move) == 3)
		ft_ss(stack_a, stack_b);
	else
		ft_show_error();
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
		if (ptr->index > ptr_next->index || ptr->value > ptr_next->value)
			return (0);
		i++;
		ptr = ptr_next;
		ptr_next = ptr_next->next;
	}
	return (1);
}
