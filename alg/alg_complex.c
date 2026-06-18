/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:18 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/18 12:22:26 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_complex(t_cll *stack_a, t_cll *stack_b)
{
	int	bits;

	bits = max_bits(stack_a->size - 1);
	indexer(stack_a);
}

int	max_bits(int max_num)
{
	int	bits;

	bits = 0;
	while (max_num > 0)
	{
		max_num = max_num / 2;
		bits++;
	}
	return (bits);
}
