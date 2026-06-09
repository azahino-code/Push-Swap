/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/09 10:52:41 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int option;
    
    

    option = getopt(argc, argv, "basic:");
    while (option != -1)
    {
        switch(option)
        {
            case 'b':
            {
                
            }
            case 'a':
            {
                
            }
            case 's':
            {
                ft_simple(argv);
            }
            case 'i':
            {
                
            }
            case 'c':
            {
                
            }
            case '?':
              ft_printf("Unknown option:") ;
            default:
                ft_adaptative();
        }
    }
    return (0);
}