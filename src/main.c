/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/10 17:17:31 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	int bench;
	int count;
	t_cll	*stack_a;
	t_cll	*stack_b;
	mode	mode;

	count = 1;
	mode = ADAPTIVE;

	if (ft_strncmp(argv[count], "--bench", 7))
	{
		count++;
		bench = 1;
	}
	if (ft_strncmp(argv[count], "--simple", 8))
	{
		mode = SIMPLE;
		count++;
	}
	else if (ft_strncmp(argv[count], "--medium", 8))
	{
		mode = MEDIUM;
		count++;
	}
	else if (ft_strncmp(argv[count], "--complex", 9))
	{
		mode = COMPLEX;
		count++;
	}
	else if (ft_strncmp(argv[count], "--adaptive", 10))
	{
		mode = ADAPTIVE;
		count++;
	}
	ft_assignment(argc, argv + count, stack_a);
	if (!stack_a)
	{
		ft_printf("Faltan argurmentos");
		return (0);
	}
	ft_mode(mode, stack_a, stack_b, bench);
}
