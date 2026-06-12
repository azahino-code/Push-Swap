/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/12 14:23:47 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//Hacemos algoritmo por inserción
int cost(int index, int size)
{
    if (index <= size / 2)
        return (index);
    else
        return (index -size);
}

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

int pos_index(t_cll *stack, int index)
{
    int     i;
    t_node   *tmp;

    i = 0;
    tmp = stack->head;
    while (tmp->index != index)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

int find_and_cost (t_cll *a, int i)
{
    int cost_a;
    int pos_a;

    pos_a = pos_index(a, i);
    cost_a = cost (pos_a, a->size);
    return (cost_a);
}

void    alg_insertion(t_cll *stack_a)
{
    t_cll   aux;
    int     index;
    
    aux.head = NULL;
    aux.size = 0;
    index = stack_a->size;

    while (index-- >= 0)
    {
        if (find_and_cost(stack_a, index) == )
        {
            /* code */
        }
        
        ft_pa(stack_a, aux); 
    }
    
}
