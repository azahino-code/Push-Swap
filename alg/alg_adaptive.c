/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:20 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/24 17:08:08 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	alg_adaptive(double disorder, t_cll *stack_a, t_cll *stack_b)
{
	if (disorder >= 0 && disorder < 0.2)
		alg_simple(stack_a, stack_b);
	else if (disorder >= 0.2 && disorder < 0.5)
		alg_medium(stack_a, stack_b,
				ft_square_root(stack_a->size), stack_a->size);
	else if (disorder >= 0.5 && disorder <= 1)
		alg_complex(stack_a, stack_b);
}
