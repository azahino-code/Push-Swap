/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/10 17:26:29 by jrecio-t         ###   ########.fr       */
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

	if (ft_strncmp(argv[count], "--bench", ft_strlen("--bench")))
	{
		count++;
		bench = 1;
	}
	if (ft_strncmp(argv[count], "--simple", ft_strlen("--simple")))
	{
		mode = SIMPLE;
		count++;
	}
	else if (ft_strncmp(argv[count], "--medium", ft_strlen("--medium")))
	{
		mode = MEDIUM;
		count++;
	}
	else if (ft_strncmp(argv[count], "--complex", ft_strlen("--complex")))
	{
		mode = COMPLEX;
		count++;
	}
	else if (ft_strncmp(argv[count], "--adaptive", ft_strlen("--adaptive")))
	{
		mode = ADAPTIVE;
		count++;
	}
	ft_assignment(argc, argv + count, &stack_a);
	if (!stack_a)
	{
		ft_printf("Faltan argurmentos");
		return (0);
	}
	ft_mode(mode, &stack_a, bench);
}
