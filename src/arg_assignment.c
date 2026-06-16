/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/16 14:15:00 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_assignment(int argc, char **argv, t_cll *stack_a)
{
	int		value;
	int		index;
	t_node	*num;

	index = 0;
	while (index < argc)
	{
		value = ft_atoi(*argv);
		num = ft_lstnew(value, index);
		ft_lstadd_back(stack_a, num);
		(*argv)++;
		index++;
	}
}

/*void	ft_mode(mode mode, t_cll *stack_a, int bench)
{
	t_cll	*stack_b;
	float	disorder;
	
	if (mode == SIMPLE)
		alg_simple(stack_a, stack_b);
	else if (mode == MEDIUM)
		alg_medium(stack_a, stack_b, (int)sqrt(stack_a->size));
	else if (mode == COMPLEX)
		alg_complex(stack_a, stack_b);
	else if (mode == ADAPTIVE)
	{
		disorder = compute_disorder(stack_a);
		alg_adaptive(stack_a, stack_b, disorder);
	}
}
void	ft_count_flags(char **argv, mode *mode, int *count, int bench)
{
	if (ft_strncmp(argv[*count], "--bench", ft_strlen("--bench")))
	{
		count++;
		bench = 1;
	}
	if (ft_strncmp(argv[*count], "--simple", ft_strlen("--simple")))
	{
		mode = SIMPLE;
		count++;
	}
	else if (ft_strncmp(argv[*count], "--medium", ft_strlen("--medium")))
	{
		mode = MEDIUM;
		count++;
	}
	else if (ft_strncmp(argv[*count], "--complex", ft_strlen("--complex")))
	{
		mode = COMPLEX;
		count++;
	}
	else if (ft_strncmp(argv[*count], "--adaptive", ft_strlen("--adaptive")))
	{
		mode = ADAPTIVE;
		count++;
	}
}*/

int	main(int argc, char **argv)
{
	t_cll	stack_a;
	int		i;

	stack_a.size = 0;
	stack_a.head = NULL;
	i = 0;
	ft_assignment(argc - 1, argv + 1, &stack_a);
	while (i++ < stack_a.size)
	{
		ft_printf("Value %d\n", stack_a.head->value);
		ft_printf("Index: %d\n", stack_a.head->index);
		ft_printf("Size: %d\n", stack_a.size);
		stack_a.head = stack_a.head->next;
	}
	return (0);
}