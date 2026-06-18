/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:20 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/18 13:57:06 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*alg_adaptive(float disorder, t_cll *stack_a, t_cll *stack_b)
{
	ft_printf("Disorder: %f", disorder);
	if (disorder < 0.2)
		return (alg_selection(stack_a, stack_b));
	else if (disorder >= 0.2 && disorder < 0.5)
		return (alg_medium(stack_a, stack_b, 
			(int)sqrt(stack_a->size), stack_a->size));
	else
		return (alg_complex(stack_a, stack_b));
}