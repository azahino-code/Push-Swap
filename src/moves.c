/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/12 13:53:18 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_cll *a, t_cll *b)
{
	ft_sa(a->head);
	ft_sb(b->head);
}

void	ft_sa(t_cll **a)
{
	ft_swap(a);
}

void	ft_sb(t_cll **b)
{
	ft_swap(b);
}

void	ft_swap(t_cll *list)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;
	t_node	*last;

	first = list->head;
	if (first == NULL || first->next == first) // Para los casos de listas con cero o un nodos
		return ;
	if (first->next->next == first) // Para el caso de una lista con dos nodos
	{
		list->head = first->next;
		return;
	}	
	last = first->prev; // Para los casos de listas con tres o mas nodos
	second = first->next;
	third = second->next;
	second->prev = last;
	second->next = first;
	first->prev = second;
	first->next = third;
	third->prev = first;
	last->next = second;
	list->head = second;
}

void	ft_push(t_cll *list_from, t_cll *list_to)
{
	t_node	*node1_from;
	t_node	*node2_from;
	t_node	*node1_to;
	t_node	*node2_to;

	if (list_from->head == NULL)
		return ;
	node1_from = list_from->head;
	node1_to = list_to;
	node2_from = node1_from->next;
	node2_to = node1_to->next;

	node2_from->prev = node1_from->prev;
	node1_from->prev->next = node2_from;
	list_from->head = node2_from;

	node1_from->next = node1_to;
	node1_from->prev = node1_to->prev;
	node1_to->prev = node1_from;
	list_to->head = node1_from;
}

t_node	*ft_lstnew(int value, int index)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->index = index;
	new->value = value;
	new->next = new;
	new->prev = new;
	return (new);
}

void	ft_lstadd_back(t_cll *lst, t_node *new)
{
	t_node	*last;

	if (lst == NULL || new == NULL)
		return ;
	else if (lst->head == NULL)
	{
		lst->head = new;
		return ;
	}
	last = ft_lstlast(lst->head);
	last->next = new;
}
