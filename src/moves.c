/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/11 15:23:30 by jrecio-t         ###   ########.fr       */
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

	if (first == NULL || first->next == first)
		return ;
	first = *list;
	last = first->prev;
	second = first->next;
	third = second->next;
	second->prev = last;
	second->next = first;
	first->prev = second;
	first->next = third;
	third->prev = first;
	last->next = second;
}
/*
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
	node1_from = node1_from->next;
	node2_to = node1_to->next;
}
*/

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
