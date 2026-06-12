/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/12 13:31:52 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	int bench;
	int count;
	t_cll	*stack_a;
	mode	mode;

	count = 1;
	mode = ADAPTIVE;

	ft_count_flags(argv, &mode, &count, bench);
	ft_assignment(argc, argv + count, stack_a);
	if (!stack_a)
	{
		ft_printf("Faltan argurmentos");
		return (0);
	}
	ft_mode(mode, &stack_a, bench);
}
