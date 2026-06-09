/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/09 13:25:48 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Trabajar las diferentes casuistuicas
int	main(int argc, char **argv)
{
	int	option;
	int	bench;

	bench = 0;
	option = getopt(argc, argv, "macsb:");
	while (option != -1)
	{
		switch (option)
		{
			case 'b':
				bench = 1;
			case 'a':
				ft_adaptive();
			case 's':
				ft_simple(argv);
			case 'm':
				ft_medium();
			case 'c':
				ft_complex();
			case '?':
				ft_printf("Unknown option:");
			default :
				ft_adaptive();
		}
	}
	return (0);
}
