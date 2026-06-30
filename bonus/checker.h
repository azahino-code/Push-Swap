/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 09:58:04 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/30 09:58:06 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>

# include "../push_swap.h"
# include "../gnl/get_next_line.h"

void	ft_rotate(t_cll *stack);
void	ft_reverse(t_cll *stack);
void	ft_swap(t_cll *stack);
void	ft_push(t_cll *list_from, t_cll *list_to);
void	ft_move_reads(t_cll *stack_a, t_cll *stack_b, char *move);
int		ft_is_sorted(t_cll *stack_a);

#endif