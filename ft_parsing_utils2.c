/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:10:25 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/01 16:26:17 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_duplicates(t_stack *stack)
{
	t_stack	*node;
	t_stack	*next_node;

	if(!stack)
		return (1);
	node = stack;
	while (node)
	{
		next_node = node->next;
		while(next_node)
		{
			if (node->value == next_node->value)
				return(0);
			next_node = next_node->next;
		}
		node = node->next;
	}
	return (1);
}

void	ft_error(t_stack *stack)
{
	free_stack(stack);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}