/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:17:04 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/16 10:20:21 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_cll *list_from, t_cll *list_to)
{
	t_node	*node1_from;
	t_node	*node2_from;
	t_node	*node1_to;

	node1_from = list_from->head;
	if (node1_from == NULL)
		return ;
	if (list_from->size == 1)
		list_from->head = NULL;
	else
	{
		node2_from = node1_from->next;
		node2_from->prev = node1_from->prev;
		node1_from->prev->next = node2_from;
		list_from->head = node2_from;
	}
	node1_to = list_to->head;
	if (node1_to == NULL)
	{
		list_to->head = node1_from;
		node1_from->next = node1_from;
		node1_from->prev = node1_from;
	}
	else
	{
		node1_from->next = node1_to;
		node1_from->prev = node1_to->prev;
		node1_to->prev->next = node1_from;
		node1_to->prev = node1_from;
		list_to->head = node1_from;
	}
	list_from->size--;
	list_to->size++;
}

void	ft_pa(t_cll *a, t_cll *b)
{
	ft_push(b, a);
}

void	ft_pb(t_cll *a, t_cll *b)
{
	ft_push(a, b);
}