/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/11 17:28:10 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_cll **a, t_cll **b)
{
	ft_sa(a);
	ft_sb(b);
}

void	ft_sa(t_cll **a)
{
	ft_swap(a);
}

void	ft_sb(t_cll **b)
{
	ft_swap(b);
}

void	ft_swap(t_cll **list)
{
	t_cll	*first;
	t_cll	*second;
	t_cll	*third;
	t_cll	*last;

	first = *list;
	if (first == NULL || first->next == first) // Para los casos de listas con cero o un nodos
		return ;
	if (first->next->next == first) // Para el caso de una lista con dos nodos
	{
		*list = first->next;
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
	*list = second;
}

void	ft_push(t_cll **list_from, t_cll **list_to)
{
	t_cll	*node1_from;
	t_cll	*node2_from;
	t_cll	*node1_to;
	t_cll	*node2_to;

	if (*list_from == NULL)
		return ;
	node1_from = *list_from;
	node1_to = *list_to;
	node2_from = node1_from->next;
	node2_to = node1_to->next;

	node2_from->prev = node1_from->prev;
	node1_from->prev->next = node2_from;
	*list_from = node2_from;
}

t_cll	*ft_lstnew(int value)
{
	t_cll	*new;

	new = (t_cll *)malloc(sizeof(t_cll));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = new;
	new->prev = new;
	return (new);
}

void	ft_lstadd_back(t_cll **lst, t_cll *new)
{
	t_cll	*last;

	if (lst == NULL || new == NULL)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
