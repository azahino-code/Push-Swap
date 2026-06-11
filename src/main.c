/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/10 14:11:35 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
	//int bench;
	int i;
	t_cll	*stack_a;
	t_cll	*stack_b;

	i = 0;
	//bench = 0;

	// Trabajar las diferentes casuistuicas
	if (argc < 2)
		ft_printf("Faltan argurmentos");
	else
	{
		ft_assignment(argc, argv, stack_a);
		while (argc > 1 && i < 3)
		{
			if (ft_strncmp(argv[i], "--simple", 8))
				return (0); //simple_al();
			else if (ft_strncmp(argv[i], "--medium", 8))
				return (0); //medium_al();
			else if (ft_strncmp(argv[i], "--complex", 9))
				return (0); //complex_al();
			else if (ft_strncmp(argv[i], "--adaptive", 10))
				return (0); //adaptative_al();
			else if (ft_strncmp(argv[i], "--bench", 7))
				return (0); //bench = 1;
			else
				return (0); //adaptative_al();
		}
	}	
	return (0);
}
