/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/11 10:03:27 by azahino-         ###   ########.fr       */
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

void	ft_mode(mode mode, t_cll **stack_a, int bench)
{
	t_cll	*stack_b;
	float	disorder;
	
	if (mode == SIMPLE)
		alg_simple(stack_a, stack_b);
	else if (mode == MEDIUM)
		alg_medium(stack_a, stack_b);
	else if (mode == COMPLEX)
		alg_complex(stack_a, stack_b);
	else if (mode == ADAPTIVE)
	{
		disorder = compute_disorder(stack_a);
		alg_adaptive(stack_a, stack_b, disorder);
	}
}
void	ft_count_flags(char **argv, mode mode, int count, int bench)
{
	if (ft_strncmp(argv[count], "--bench", ft_strlen("--bench")))
	{
		count++;
		bench = 1;
	}
	if (ft_strncmp(argv[count], "--simple", ft_strlen("--simple")))
	{
		mode = SIMPLE;
		count++;
	}
	else if (ft_strncmp(argv[count], "--medium", ft_strlen("--medium")))
	{
		mode = MEDIUM;
		count++;
	}
	else if (ft_strncmp(argv[count], "--complex", ft_strlen("--complex")))
	{
		mode = COMPLEX;
		count++;
	}
	else if (ft_strncmp(argv[count], "--adaptive", ft_strlen("--adaptive")))
	{
		mode = ADAPTIVE;
		count++;
	}
}
