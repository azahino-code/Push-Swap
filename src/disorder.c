/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:41:11 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 11:21:16 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Hay que comprobar que funciona

float	compute_disorder(t_cll **a)
{
	int		mistakes;
	int		total_pairs;
	int		i;
	int		j;
	void	*prev_content;

	i = 0;
	while (i < (int)sizeof(*a) - 1)
	{
		j = i + 1;
		while (j < (int)sizeof(*a) - 1)
		{
			total_pairs += 1;
			prev_content = (*a)->value;
			*a = (*a)->next;
			if (prev_content > (*a)->value)
			{
				mistakes += 1;
			}
		}
	}
	return ((float)(mistakes / total_pairs));
}
