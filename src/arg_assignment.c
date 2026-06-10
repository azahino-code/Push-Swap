/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/10 12:54:05 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_cll	*ft_assignment(int argc, char *argv, t_cll **stack_a)
{
	int		index;
	char	**str;
	int		value;
	t_cll	*num;

	index = 0;
	while (index < argc)
	{	
		str = ft_split(argv[index], " ");
		value = ft_atoi(str[index]); //12 13 54 26
		if (value)
		{
			num = ft_lstnew(value);
			ft_lstadd_back(*stack_a, num);
		}
		free(str);
		index++;
	}
	return ()
}