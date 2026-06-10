/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 14:02:55 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_assignment(int argc, char *argv, t_cll **stack_a)
{
	int		index;
	int		value;
	t_cll	*num;

	index = 0;
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