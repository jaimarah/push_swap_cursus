/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:34:47 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/02 17:19:55 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	head = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = head->next;
	head->next = NULL;
	last->next = head;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 1);
}
