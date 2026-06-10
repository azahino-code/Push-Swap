/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 15:48:32 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_assignment(int argc, char **argv, t_cll **stack_a)
{
	int		index;
	char	**str;
	int		value;
	t_cll	*num;

	index = 0;
	while (index < argc)
	{	
		str = ft_split(argv[index], " ");
		value = ft_atoi(str[index]);
		if (value)
		{
			num = ft_lstnew(value);
			ft_lstadd_back(*stack_a, num);
		}
		free(str);
		index++;
	}
}