/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:38:49 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/04 14:42:20 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
    int             value;
    int             index;
    struct s_stack  *next;
} t_stack;

t_stack	*ft_stack_new(int value);
void    ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_free_stack(t_stack *stack);
int		ft_stack_size(t_stack *stack);

int		ft_is_num(char *s);
int 	ft_is_empty(char *s);
long	ft_atol(char *str);
long	ft_check_int(long n);
int		ft_duplicates(t_stack *stack);
void	ft_error(t_stack *stack);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	pa(t_stack	**a, t_stack **b);
void	pb(t_stack	**a, t_stack **b);

void	ft_rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	ft_reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	ft_sort_3(t_stack **a);
void	ft_sort_4(t_stack **a, t_stack **b);
void	ft_sort_5(t_stack **a, t_stack **b);

int		ft_chunck_size(int size);
void	ft_push_chucks(t_stack **a, t_stack **b, int size);
int		ft_find_max_pos(t_stack *b);
void	push_back(t_stack **a , t_stack **b);
void	ft_chunk_sort(t_stack **a, t_stack **b);


#endif