/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:37:28 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/17 10:55:04 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = ft_stack_size(stack) - 1;
	bits = 0;
	while (max > 0)
	{
		max >>= 1;
		bits++;
	}
	return (bits);
}

void	ft_assign_index(t_stack *stack)
{
	t_stack	*current;
	t_stack	*cmp;
	int		index;

	current = stack;
	while (current)
	{
		index = 0;
		cmp = stack;
		while (cmp)
		{
			if (cmp->value < current->value)
				index++;
			cmp = cmp->next;
		}
		current->index = index;
		current = current->next;
	}
}

t_stack	*ft_get_min(t_stack *stack)
{
	t_stack	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (stack->value < min->value)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_stack	*ft_get_max(t_stack *stack)
{
	t_stack	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}
