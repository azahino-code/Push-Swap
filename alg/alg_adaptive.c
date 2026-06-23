/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_adaptive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 10:04:20 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/23 17:01:00 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_how_many_chunks(t_cll *a)
{
	int	size;

	size = a->size;
	if (size >= 500)
		return (10);
	else if ((size >= 100) && (size < 500))
		return (6);
	else
		return ((int)sqrt((int)sqrt(size)));
}

t_cll	*alg_adaptive(double disorder, t_cll *stack_a, t_cll *stack_b)
{
	if (disorder >= 0 && disorder < 0.2)
		return (alg_simple(stack_a, stack_b));
	else if (disorder >= 0.2 && disorder < 0.5)
		return (alg_medium(stack_a, stack_b,
				ft_how_many_chunks(stack_a), stack_a->size));
	else if (disorder >= 0.5 && disorder <= 1)
		return (alg_complex(stack_a, stack_b));
	else
		return (NULL);
}
