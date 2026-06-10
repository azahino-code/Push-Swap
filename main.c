/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:45:49 by azahino-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/06/10 08:05:59 by azahino-         ###   ########.fr       */
=======
/*   Updated: 2026/06/09 13:25:48 by jrecio-t         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int option;
    int bench;
    int i = 0;

    bench = 0;
    
// Trabajar las diferentes casuistuicas
    while (i++ < argc)
    {
        if (ft_strcmp(*argv[i], "--simple"))
            simple_al();
        else if (*argv[i] == "--medium")
            medium_al();
        else if (*argv[i] == "--complex")
            complex_al();
        else if (*argv[i] == "--adaptative")
            adaptative_al();
        else if (*argv[i] == "" || *argv[i] == NULL)
            adaptative_al();   
    }
    return (0);
}
