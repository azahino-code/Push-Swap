/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/09 10:11:35 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int option;
    int bench;

    bench = 0;    
    
// Trabajar las diferentes casuistuicas
    option = getopt(argc, argv, "macsb:");
    while (option != -1)
    {
        switch(option)
        {
            case 'b':
                bench = 1;
            case 'a':
            {
                ft_adaptive();
            }
            case 's':
            {
                ft_simple(argv);
            }
            case 'm':
            {
                ft_medium();
            }
            case 'c':
            {
                ft_complex();
            }
            case '?':
              ft_printf("Unknown option:");
            default:
                ft_adaptive();
        }
    }
    return (0);
}