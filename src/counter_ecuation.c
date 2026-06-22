/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter_ecuation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:32:23 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/22 15:41:13 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	Suma(t_cll *a, t_cll *b)
{
	int	i;

	i = 0;
	ft_printf("%u", sizeof(a->moves));
	while (i < sizeof(a->moves))
	{
		a->moves[i] += b->moves[i];
		i++;
	}
}