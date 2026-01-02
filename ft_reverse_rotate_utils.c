/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:56:41 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/02 17:29:40 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	head = *stack;
	last = *stack;
	while (last->next->next)
		last = last->next;
	last->next->next = head;
	*stack = last->next;
	last->next = NULL;
}

void	rra(t_stack **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrb(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}
