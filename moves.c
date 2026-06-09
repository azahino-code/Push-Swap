/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 09:26:45 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/09 10:06:00 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_dll *a, int bench)
{
    int cpy;
    
    if (bench > 0)
        ft_printf("sa");
}

void    ft_sa(t_stack *a, int bench)
{
    int cpy;
    
    copy = a[0];
    a[0] = a[1];
    a[1] = copy;
    if (bench > 0)
        ft_printf("sa");
}