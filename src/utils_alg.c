/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_alg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 08:58:10 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/18 12:19:25 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Hacemos algoritmo por selección
// ft_cost sirve para valorar si queremos rotar para arriba o hacia abajo
int	ft_cost(int index, int size)
{
	if (index <= size / 2)
		return (index);
	else
		return (size - index);
}

//total_cost lo usaremos para devolver información
int	total_cost(int cost_a, int cost_b)
{
	if ((cost_a >= 0 && cost_b >= 0) || (cost_a < 0 && cost_b < 0))
	{
		if (abs(cost_a) > abs(cost_b))
		{
			return (abs(cost_a));
		}
		return (abs(cost_b));
	}
	return (abs(cost_a) + abs(cost_b));
}

//pos_index lo usaremos para ubicar el indice del nodo que necesitemos
int	pos_index(t_cll *stack, int min_index, int max_index)
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
