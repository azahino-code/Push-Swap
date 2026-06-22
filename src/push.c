/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:17:04 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/22 16:24:58 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	extract_node_fr(t_node *node2, t_node *node1, t_cll *list_from)
{
	node2 = node1->next;
	node2->prev = node1->prev;
	node1->prev->next = node2;
	list_from->head = node2;
}

static void	insert_node(t_node *node1_fr, t_node *node1_to, t_cll *list_to)
{
	node1_fr->next = node1_to;
	node1_fr->prev = node1_to->prev;
	node1_to->prev->next = node1_fr;
	node1_to->prev = node1_fr;
	list_to->head = node1_fr;
}

static void	ft_push(t_cll *list_from, t_cll *list_to)
{
	t_node	*node1_from;
	t_node	*node2_from;
	t_node	*node1_to;

	node1_from = list_from->head;
	node2_from = NULL;
	if (node1_from == NULL)
		return ;
	if (list_from->size == 1)
		list_from->head = NULL;
	else
		extract_node_fr(node2_from, node1_from, list_from);
	node1_to = list_to->head;
	if (node1_to == NULL)
	{
		list_to->head = node1_from;
		node1_from->next = node1_from;
		node1_from->prev = node1_from;
	}
	else
		insert_node(node1_from, node1_to, list_to);
	list_from->size--;
	list_to->size++;
}

void	ft_pa(t_cll *a, t_cll *b)
{
	ft_push(b, a);
	ft_printf(1, "pa\n");
	a->moves[9]++;
	a->moves[11]++;
}

void	ft_pb(t_cll *a, t_cll *b)
{
	ft_push(a, b);
	ft_printf(1, "pb\n");
	a->moves[10]++;
	a->moves[11]++;
}
/*
int main (void)
{
	t_cll 	stack_a;
	t_cll	stack_b;
	t_node 	*bir;

	bir = malloc(sizeof(t_node));
	if	(!bir)
		return (0);
	bir->value = 10;
	bir->index = 0;
	stack_b.head = NULL;
	stack_b.size = 0;
	stack_a.head = bir;
	stack_a.size = 1;
	
	ft_pb(&stack_a, &stack_b, 1);
	
	free(bir);
}*/
