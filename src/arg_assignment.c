/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_assignment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:18:59 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/27 16:03:21 by jrecio-t         ###   ########.fr       */
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
	int		argcount;
	t_node	*ptr;
	char	*args;
	char	**tmp;
	
	args = ft_strdup("");
	while (argc-- > 0)
	{
		*tmp = args;
		args = ft_strjoin(args, *argv);
		free(*tmp);
	}
	tmp = ft_split(args, 32);
	free(args);
	while (*tmp)
	{
		value = ft_atoi(*tmp);
		ptr = ft_lstnew(value);
		ft_lstadd_back(stack_a, ptr);
		tmp++;
	}
	ft_index_sorted(stack_a->size, ptr, move);
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
			ft_square_root(stack_a->size), stack_a->size);
	else if (mode == COMPLEX)
		alg_complex(stack_a, &stack_b);
	else
		alg_adaptive(disorder, stack_a, &stack_b);
	ft_addition(stack_a, &stack_b);
}

static int	ft_check_error(char *arg, t_mode *mode_p, t_mode mode, size_t len)
{
	int	count;

	count = 0;
	if (ft_strlen(arg) == len)
	{
		*mode_p = mode;
		count++;
	}
	else
	{
		ft_printf(2, "Error");
		exit(2);
	}
	return (count);
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
