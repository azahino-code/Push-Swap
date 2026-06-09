/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/09 17:38:11 by jrecio-t         ###   ########.fr       */
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
