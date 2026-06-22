/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/22 15:01:33 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int			i; //este lo quitaremos mas adelante ya que la función no imprime los numeros ordenados
	int			count;
	float		disorder;
	t_cll		stack_a;
	t_mode		mode;

	count = 1;
	mode = ADAPTIVE;
	ft_memset(&stack_a, 0, sizeof(t_cll));
	ft_count_flags(argv, &mode, &count, &stack_a);
	ft_assignment(argc - count, argv + count, &stack_a);
	if (!stack_a.head)
	{
		ft_printf(1, "Faltan argurmentos");
		return (0);
	}
	disorder = compute_disorder(&stack_a);
	stack_a = ft_mode(mode, &stack_a, disorder);
	i = 0; //se irá fuera
	while (i++ < stack_a.size) //esto se quitará y vamos bien de lineas
	{
		ft_printf(1, "%d\n", stack_a.head->value);
		stack_a.head = stack_a.head->next;
	}
	if (stack_a.bench == 1)
		ft_bench(disorder, mode, &stack_a);
}
