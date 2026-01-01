/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 11:48:55 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/01 16:26:30 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_stack	*ft_stack_new(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;

	return (node);
}

void    ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*node;

	if (!new || !stack)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	node = *stack;
	while (node->next)
	{
		node = node->next;
	}
	node->next = new;
}

void	ft_free_stack(t_stack *stack)
{
	t_stack	*tmp;

	if(!stack)
		return ;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}