/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:43:09 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/09 13:01:26 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
 #define PUSH_SWAP_H
 
 #include <unistd.h>
 #include <stdlib.h>

 typedef struct s_node
{
	void			*content;
	struct s_node	*prev;
	struct s_node	*next;
}					t_cll;

#endif