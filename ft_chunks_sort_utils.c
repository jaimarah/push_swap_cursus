/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks_sort_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:06:22 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/04 14:24:14 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chunck_size(int size)
{
	if (size <= 100)
		return (20);
	else
		return (35);
}

void	ft_push_chucks(t_stack **a, t_stack **b, int size)
{
	int	chunk_size;
	int	chunk_end;
	int	pushed;

	chunk_size = get_chunk_size(size);
	chunk_end = chunk_size;
	pushed = 0;
	while (*a)
	{
		if ((*a)->index < chunck_end)
		{
			pb(a, b);
			pushed++;
			if ((*b)->index < chunk_end - chunk_size / 2)
				rb(b);
		}
		else
			ra(a);
		if (pushed == chunk_end && *a)
			chunk_end += chunk_size;
	}
}

int	ft_find_max_pos(t_stack *b)
{
	int	max_index;
	int	max_pos;
	int	pos;

	max_index = b->index;
	max_pos = 0;
	pos = 0;
	while (b)
	{
		if (b->index > max_index)
		{
			max_index = b->index;
			max_pos = pos;
		}
		b = b->next;
		pos++;
	}
	return (max_pos);
}

void	push_back(t_stack **a , t_stack **b)
{
	int	pos;
	int	size;

	while(*b)
	{
		size = ft_stack_size(*b);
		pos = ft_find_max_pos(*b);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				rb(b);
		}
		else
		{
			while (pos++ < size)
				rrb(b);
		}
		pa(a, b);
	}
}