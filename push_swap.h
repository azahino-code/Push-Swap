/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:43:09 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/21 21:17:36 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>

# include "printf/ft_printf.h"		

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_cll
{
	int		size;
	int		moves[11]; //para sustituir
	//t_rotate		r_num;
	//t_sp			s_r_num;
	t_node	*head;
}					t_cll;

typedef enum mode
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}			t_mode;

/*typedef struct s_rotate
{
	int	ra; = moves[0]
	int rb; = moves[1]
	int rr; = moves[2]
	int	rra; = moves[3]
	int rrb; = moves[4]
	int	rrr; = moves[5]
}				t_rotate;

typedef struct s_sp
{
	int	sa; = moves[6]
	int	sb; = moves[7]
	int	ss; = moves[8]
	int	pa; = moves[9]
	int	pb; = moves[10]
}			t_sp;*/

void	ft_assignment(int argc, char **argv, t_cll *stack_a);
void	ft_bench(float disorder, t_mode mode, int moves_count, t_cll *a);
void	ft_count_flags(char **argv, t_mode *mode, int *count, int *bench);
t_node	*ft_lstnew(int val);
void	ft_lstadd_back(t_cll *lst, t_node *new);
float	compute_disorder(t_cll *stack_a);
int		ft_atoi(const char *nptr);
t_cll	ft_mode(t_mode mode, t_cll *stack_a, float disorder);
t_cll	*alg_selection(t_cll *stack_a, t_cll *stack_b);
t_cll	*alg_medium(t_cll *stack_a, t_cll *stack_b, int n_chunks, int size);
t_cll	*alg_complex(t_cll *stack_a, t_cll *stack_b);
t_cll	*alg_adaptive(float disorder, t_cll *stack_a, t_cll *stack_b);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
int		pos_index(t_cll *stack, int min_index, int max_index);
int		ft_cost(int index, int size);
void	ft_pa(t_cll *a, t_cll *b, int bench);
void	ft_pb(t_cll *a, t_cll *b, int bench);
void	ft_ss(t_cll *a, t_cll *b, int bench);
void	ft_sa(t_cll *a, int bench);
void	ft_sb(t_cll *b, int bench);
void	ft_ra(t_cll *a, int bench);
void	ft_rb(t_cll *b, int bench);
void	ft_rr(t_cll *a, t_cll *b, int bench);
void	ft_rra(t_cll *a, int bench);
void	ft_rrb(t_cll *b, int bench);
void	ft_rrr(t_cll *a, t_cll *b, int bench);

#endif