/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:41:11 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/18 12:08:41 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Hay que comprobar que funciona

float	compute_disorder(t_cll *a)
{
	int		mistakes;
	int		total_pairs;
	int		i;
	int		j;
	int		prev_content;

	i = 0;
	while (i < (int) sizeof(a->head) - 1)
	{
		j = i + 1;
		while (j < (int) sizeof(a->head) - 1)
		{
			total_pairs += 1;
			prev_content = a->head->value;
			a->head = a->head->next;
			if (prev_content > a->head->value)
			{
				mistakes += 1;
			}
			j++;
		}
		i++;
	}
	return ((float)(mistakes / total_pairs));
}
