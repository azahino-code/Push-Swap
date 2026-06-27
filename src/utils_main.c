/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/27 19:19:04 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_index_sorted(int stack_size, t_cll *stack_a)
{
	int		node_rest;
	int		moves;
	int		index;
	t_node	*ptr;
	t_node	*move;

	if (!stack_a->head)
		ft_show_error();
	ptr = stack_a->head;
	move = stack_a->head->next;
	node_rest = 0;
	while (node_rest++ < stack_size)
	{
		moves = 0;
		index = 0;
		while (moves++ < stack_size)
		{
			if (ptr->value > move->value)
				index++;
			move = move->next;
		}
		ptr->index = index;
		ptr = ptr->next;
	}
}

static char	*ft_loop(int *argc, char *args, char **argv)
{
	char	*tmp;

	while (*argc > 0)
	{
		tmp = args;
		args = ft_strjoin(args, *argv);
		free(tmp);
		argv++;
		(*argc)--;
	}
	return (args);
}

void	ft_assignment(int argc, char **argv, t_cll *stack_a)
{
	long int	value;
	t_node		*ptr;
	char		*args;
	char		**tmp;

	args = ft_strdup("");
	args = ft_loop(&argc, args, argv);
	tmp = ft_split(args, 32);
	while (tmp[argc])
	{
		value = ft_atoi(tmp[argc]);
		if (value > 2147483647 || value < -2147483648)
			ft_show_error();
		ptr = ft_lstnew(value);
		ft_lstadd_back(stack_a, ptr);
		argc++;
	}
	ft_freeall(tmp, ft_count_words(args, 32));
	free(args);
	ft_index_sorted(stack_a->size, stack_a);
}

void	ft_mode(t_mode mode, t_cll *stack_a, float disorder)
{
	t_cll	stack_b;

	ft_memset(&stack_b, 0, sizeof(t_cll));
	stack_b.bench = stack_a->bench;
	stack_b.disorder = stack_a->disorder;
	if (stack_a->disorder == 0.0)
		return ;
	if (mode == SIMPLE)
		alg_simple(stack_a, &stack_b);
	else if (mode == MEDIUM)
		alg_medium(stack_a, &stack_b,
			how_many_chunks(stack_a), stack_a->size);
	else if (mode == COMPLEX)
		alg_complex(stack_a, &stack_b);
	else
		alg_adaptive(disorder, stack_a, &stack_b);
	ft_addition(stack_a, &stack_b);
}

void	ft_count_flags(char **argv, t_mode *mode, int *count, t_cll *stack_a)
{
	if (ft_strcmp(argv[*count], "--bench") == 0)
	{
		if (ft_strlen(argv[*count]) == 7)
		{
			(*count)++;
			stack_a->bench = 1;
		}
		else
			ft_show_error();
	}
	if (ft_strcmp(argv[*count], "--simple") == 0)
		*count += ft_check_error(argv[*count], mode, (t_mode)SIMPLE, 8);
	else if (ft_strcmp(argv[*count], "--medium") == 0)
		*count += ft_check_error(argv[*count], mode, (t_mode)MEDIUM, 8);
	else if (ft_strcmp(argv[*count], "--complex") == 0)
		*count += ft_check_error(argv[*count], mode, (t_mode)COMPLEX, 9);
	else if (ft_strcmp(argv[*count], "--adaptive") == 0)
		*count += ft_check_error(argv[*count], mode, (t_mode)ADAPTIVE, 10);
}
