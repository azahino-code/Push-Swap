/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:20 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/22 09:40:57 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_adaptive(float disorder, t_cll *stack_a, t_cll *stack_b, int *bench)
{
	ft_printf(1, "Disorder: %f", disorder);
	if (disorder < 0.2)
		return (alg_simple(stack_a, stack_b, bench));
	else if (disorder >= 0.2 && disorder < 0.5)
		return (alg_medium(stack_a, stack_b, 
			(int)sqrt(stack_a->size), stack_a->size, bench));
	else
		return (alg_complex(stack_a, stack_b, bench));
}