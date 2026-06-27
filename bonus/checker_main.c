/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:00:08 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/27 20:33:58 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../gnl/get_next_line.h"

int	main(int argc, char **argv)
{
	t_cll	stack_a;
	t_cll	*stack_b;
	char	*movements;
	
	ft_assignment(argc - 1, argv + 1, &stack_a);
	stack_b = malloc(sizeof(t_cll));
	if (!stack_b)
		return (0);
	movements = get_next_line(0);
	while (movements != NULL)
	{
		ft_move_reads(&stack_a, stack_b, movements);
		movements = get_next_line(0);
	}
	free(movements);
	if (stack_b->size == 0 && ft_is_sorted(&stack_a))
		ft_printf(1, "OK");
	else
		ft_printf(1, "KO");
	return(free(stack_b), 0);
}
