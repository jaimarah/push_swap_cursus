/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:38:49 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/16 15:41:00 by jaimarah         ###   ########.fr       */
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

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);

t_stack	*ft_stack_new(int value);
void    ft_stack_add_back(t_stack **stack, t_stack *new);
void	ft_free_stack(t_stack *stack);
int		ft_stack_size(t_stack *stack);
int		ft_get_max_bits(t_stack *stack);
void	ft_assign_index(t_stack *stack);
t_stack	*ft_get_min(t_stack *stack);
t_stack	*ft_get_max(t_stack *stack);

int		ft_is_num(char *s);
int 	ft_is_empty(char *s);
long	ft_atol(char *str);
long	ft_check_int(long n);
int		ft_duplicates(t_stack *stack);
void	ft_error(t_stack *stack);
t_stack	*ft_build_stack(int argc, char **argv);
int		ft_stack_is_sorted(t_stack *stack);

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

int		ft_find_pos(t_stack *a, int index);
void	ft_sort_2(t_stack **a);
void	ft_sort_3(t_stack **a);
void	ft_sort_4(t_stack **a, t_stack **b);
void	ft_sort_5(t_stack **a, t_stack **b);

void	ft_radix_sort(t_stack **a, t_stack **b);


#endif