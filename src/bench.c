/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:10:24 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/18 20:57:59 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	print_adaptive_strat(float disorder)
{
	if (disorder < 0.2)
		fprintf("bench.txt", "[bench] startegy: simple / O(n2)\n");
	else if (disorder >= 0.2 && disorder < 0.5)
		fprintf("bench.txt", "[bench] startegy: medium / O(n√n)\n");
	else
		fprintf("bench.txt", "[bench] startegy: complex / O(n log n)\n");
}
void	ft_bench(float disorder, t_mode mode, int moves_count, t_cll *a)
{
	int	fd;

	fd = open("bench.txt");
	
	fprintf("bench.txt", "[bench] disorder: %f\n", disorder);
	if (mode == 1)
		fprintf("bench.txt", "[bench] startegy: simple / O(n2)\n");
	else if (mode == 2)
		fprintf("bench.txt", "[bench] startegy: medium / O(n√n)\n");
	else if (mode == 3)
		fprintf("bench.txt", "[bench] startegy: complex / O(n log n)\n");
	else
		print_adaptive_strat(disorder);
	ft_printf("bench.txt", "[bench] total-ops: %d\n", moves_count);
	ft_printf("bench.txt", "[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", a->s_r_num.sa, 
		a->s_r_num.sb, a->s_r_num.ss, a->s_r_num.pa, a-> s_r_num.pb);
	ft_printf("bench.txt", "[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n",
		a->r_num.ra, a->r_num.rb, a->r_num.rr, a->r_num.rra, a-> r_num.rrb, a->r_num.rrr);
	fclose("bench.txt");
}
