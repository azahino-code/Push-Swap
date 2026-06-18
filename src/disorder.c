/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:41:11 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/18 13:18:48 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Hay que comprobar que funciona

float	compute_disorder(t_node *a, int size)
{
	float	mistakes;
	float	total_pairs;
	int		i;
	int		j;
	t_node	*ptr;

	i = 0;
	total_pairs = 0;
	mistakes = 0;
	while (i < size - 1)
	{
		ptr = a->next;
		j = i + 1;
		while (j < size)
		{
			total_pairs += 1;
			if (ptr->value < a->value)
				mistakes += 1;
			j++;
			ptr = ptr->next;
		}
		i++;
		a = a->next;
	}
	return (mistakes /total_pairs);
}
