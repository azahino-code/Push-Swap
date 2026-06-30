/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:00:08 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/30 09:58:23 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_cll	stack_a;
	t_cll	stack_b;
	char	*movements;
	char	*tmp;

	ft_memset(&stack_a, 0, sizeof(t_cll));
	ft_memset(&stack_b, 0, sizeof(t_cll));
	ft_assignment(argc - 1, argv + 1, &stack_a);
	movements = get_next_line(0);
	while (movements != NULL)
	{
		ft_move_reads(&stack_a, &stack_b, movements);
		tmp = movements;
		movements = get_next_line(0);
		free(tmp);
	}
	free(movements);
	if (stack_b.size == 0 && ft_is_sorted(&stack_a))
		ft_printf(1, "OK\n");
	else
		ft_printf(1, "KO\n");
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
