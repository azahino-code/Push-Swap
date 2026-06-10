/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 15:27:53 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ftss(t_cll *a, t_cll *b)
{
	ft_swap(a, a->next);
	ft_swap(b, b->next);
}

void	ft_swap(t_cll **head, t_cll **change)
{
	t_cll	*temp;

	if (*head == NULL || (*head)->next == *head)
		return ;

	temp = *head;
	*head = *change;
	*change = temp;
 
	/*head = *list;
	last = head->prev;
	node2 = head->next;
	node3 = node2->next;

	node2->prev = head->prev;
	node2->next = 
	
	node2->next = head;
	head->next = node3;
	node3->prev = head;
	head->prev = node2;
	*/
	return ;
}
/*
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
