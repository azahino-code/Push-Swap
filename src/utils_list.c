/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:22:31 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/24 09:59:53 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lstnew(int val)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = val;
	new->next = new;
	new->prev = new;
	return (new);
}

void	ft_lstadd_back(t_cll *lst, t_node *new)
{
	t_node	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (lst->head == NULL)
	{
		lst->head = new;
	}
	else
	{
		last = lst->head->prev;
		last->next = new;
		new->prev = last;
		lst->head->prev = new;
		new->next = lst->head;
	}
	lst->size++;
}

static int	ft_num_builder(const char *nptr, int nb)
{
	while ((*nptr >= '0' && *nptr <= '9'))
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	if (*nptr != '\0')
	{
		ft_show_error(1);
		return (0);
	}
	else
		return (nb);
}

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	neg;

	nb = 0;
	neg = 0;
	if (*nptr == '\0')
		return (0);
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '0')
		nptr++;
	if (*nptr == '-')
	{
		neg = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	nb = ft_num_builder(nptr, nb);
	if (neg == 1)
		nb = -nb;
	return (nb);
}
void	ft_lstclear(t_cll *lst)
{
	t_node	*temp;
	int		i;

	temp = NULL;
	if (lst == NULL)
		return ;
	i = 0;
	while (i++ < lst->size)
	{
		temp = lst->head->next;
		free(lst->head);
		lst->head = temp;
	}
	lst = NULL;
}
