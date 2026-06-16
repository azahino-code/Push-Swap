/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/16 13:31:45 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
static void	ft_index_sorted(int stack_size, t_node *ptr, t_node *move)
{
	int	nodos_restantes;
	int moves;
	int	index;
	
	nodos_restantes = 0;
	while (nodos_restantes++ < stack_size)
	{
		moves = 0;
		index = 0;
		while (moves++ < stack_size)
		{
			if (ptr->value > move->value )
			{
				index++;
				move = move->next;
			}
			else
				move = move->next;
		}
		ptr->index = index;
		ptr = ptr->next;
	}
}
void	ft_assignment(int argc, char **argv, t_cll *stack_a)
{
	int		value;
	t_node	*ptr;
	t_node	*move;

	while (argc-- > 0)
	{
		value = ft_atoi(*argv);
		ptr = ft_lstnew(value);
		ft_lstadd_back(stack_a, ptr);
		argv++;
	}
	ptr = stack_a->head;
	move = stack_a->head->next;
	ft_index_sorted(stack_a->size, ptr, move);
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
	t_node	*cur;
	int		i;

	stack_a.size = 0;
	stack_a.head = NULL;
	i = 0;
	ft_assignment(argc - 1, argv + 1, &stack_a);
	cur = stack_a.head;
	while (i++ < stack_a.size)
	{
		ft_printf("Value %d\n", cur->value);
		ft_printf("Index: %d\n", cur->index);
		cur = cur->next;
	}
	ft_printf("Size: %d\n", stack_a.size);
	return (0);
}