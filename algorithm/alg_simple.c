/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/15 10:25:00 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//Hacemos algoritmo por selección
// ft_cost sirve para valorar si queremos rotar para arriba o hacia abajo
int ft_cost(int index, int size)
{
    if (index <= size / 2)
        return (index);
    else
        return (size - index);
}
//total_cost lo usaremos para devolver información
int total_cost(int cost_a, int cost_b)
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
int pos_index(t_cll *stack, int actual_index)
{
    int     i;
    t_node   *tmp;

    i = 0;
    tmp = stack->head;
    while (tmp->index != actual_index)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

void    alg_selection(t_cll *stack_a)
{
    t_cll   aux;
    int     size;
    int     cost;
    
    aux.head = NULL;
    aux.size = 0;
    size = stack_a->size;
    cost = 0;
    while (size-- > 0)
    {
        cost = ft_cost(pos_index(stack_a, size - 1), size);
        if (cost <= size / 2)
        {
            while (cost-- > 0)
            {
                ft_ra();
            }
        }
        else
        {
            while (cost-- < 0)
            {
                ft_rra();
            }
        }
        ft_pa();
    }
}
