/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/23 11:00:01 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_index_sorted(int stack_size, t_node *ptr, t_node *move)
{
	int	node_rest;
	int	moves;
	int	index;

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

t_cll	ft_mode(t_mode mode, t_cll *stack_a, float disorder)
{
	t_cll	stack_b;

	ft_memset(&stack_b, 0, sizeof(t_cll));
	stack_b.bench = stack_a->bench;
	if (mode == SIMPLE)
		return (*alg_simple(stack_a, &stack_b));
	else if (mode == MEDIUM)
		return (*alg_medium(stack_a, &stack_b,
				how_many_chunks(stack_a), stack_a->size));
	else if (mode == COMPLEX)
		return (*alg_complex(stack_a, &stack_b));
	else
		return (*alg_adaptive(disorder, stack_a, &stack_b));
}

static void	ft_check_error(char *arg, t_mode *mode, int *count, size_t arg_len)
{
	if (ft_strlen(arg) == arg_len)
	{
		*mode = ADAPTIVE;
		(*count)++;
	}
	else
	{
		ft_show_error(0);
		exit(2);
	}
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
		{
			ft_show_error(0);
			exit(2);
		}
	}
	if (ft_strcmp(argv[*count], "--simple") == 0)
		ft_check_error(argv[*count], mode, count, 8);
	else if (ft_strcmp(argv[*count], "--medium") == 0)
		ft_check_error(argv[*count], mode, count, 8);
	else if (ft_strcmp(argv[*count], "--complex") == 0)
		ft_check_error(argv[*count], mode, count, 9);
	else if (ft_strcmp(argv[*count], "--adaptive") == 0)
		ft_check_error(argv[*count], mode, count, 10);
}
