/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:38:49 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/01 16:39:21 by jaimarah         ###   ########.fr       */
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

int		ft_is_num(char *s);
int 	ft_is_empty(char *s);
long	ft_atol(char *str);
long	ft_check_int(long n);
int		ft_duplicates(t_stack *stack);
void	ft_error(t_stack *stack);


#endif