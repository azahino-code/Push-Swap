/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_alg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 08:58:10 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/23 17:02:34 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_cost(int index, int size)
{
	if (index <= size / 2)
		return (index);
	else
		return (size - index);
}

int	ft_pos_index(t_cll *stack, int min_index, int max_index)
{
	int		i;
	int		moves;
	t_node	*tmp;
	t_node	*ant;

	i = 0;
	moves = 0;
	tmp = stack->head;
	ant = stack->head;
	while ((tmp->index < min_index || tmp->index > max_index))
	{
		tmp = tmp->next;
		i++;
	}
	while (ant->index < min_index || ant->index > max_index)
	{
		ant = ant->prev;
		moves++;
	}
	if (i <= moves)
		return (i);
	else if (moves < i)
		return (stack->size - moves);
	return (i);
}
