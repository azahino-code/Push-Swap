/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 17:19:16 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_assignment(int argc, char **argv, t_cll **stack_a)
{
	int		index;
	int		value;
	t_cll	*num;

	index = 1;
	while (index < argc)
	{
		value = ft_atoi(argv[index]);
		if (value)
		{
			num = ft_lstnew(value);
			ft_lstadd_back(*stack_a, num);
		}
		index++;
	}
	return ;
}

void	ft_mode(mode mode, t_cll stack_a, t_cll stack_b, int bench)
{
	
}