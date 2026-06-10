/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/09 18:09:01 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cll	*ft_swap(t_cll **list)
{
	t_cll	*node1;
	t_cll	*node2;
	t_cll	*node3;

	if (*list == NULL || (*list)->next == NULL)
		return (*list);
	node1 = *list;
	node2 = node1->next;
	node3 = node2->next;
	node2->next = node1;
	node1->next = node3;
	if (node3)
		node3->prev = node1;
	node1->prev = node2;
	node2->prev = NULL;
	return (node2);
}
/*
Otra forma de hacerlo:

t_cll	*ft_swap(t_cll *list)
{
	void	*temp;

	if (list == NULL || list->next == NULL)
		return (list);
	temp = list->next->content;
	list->next->content = list->content;
	list->content = temp;
	return (list);
}
*/


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
	
	//Continuar mañana
}