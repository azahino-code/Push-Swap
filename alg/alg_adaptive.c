/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:20 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/22 15:56:17 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_adaptive(double disorder, t_cll *stack_a, t_cll *stack_b, int *bench)
{
	if (disorder >= 0 && disorder < 0.2)
		return (alg_simple(stack_a, stack_b, bench));
	else if (disorder >= 0.2 && disorder < 0.5)
		return (alg_medium(stack_a, stack_b,
				(int)sqrt(stack_a->size), stack_a->size, bench));
	else if (disorder >= 0.5 && disorder <= 1)
		return (alg_complex(stack_a, stack_b, bench));
	else
		return (NULL);
}
