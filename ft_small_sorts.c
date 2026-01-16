/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:57:23 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/16 12:24:22 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_pos(t_stack *a, int index)
{
	int pos;

	pos = 0;
	while(a)
	{
		if (a->index == index)
			return (pos);
		a = a->next;
		pos++;
	}
	return (-1);
}

void	ft_sort_3(t_stack **a)
{
	int	i;
	int	j;
	int	k;

	i = (*a)->index;
	j = (*a)->next->index;
	k = (*a)->next->next->index;

	if (i > j && j < k && i < k)
		sa(a);
	else if (i > j && j > k)
	{
		sa(a);
		rra(a);
	}
	else if (i > j && j < k && i > k)
		ra(a);
	else if (i < j && j > k && i < k)
	{
		sa(a);
		ra(a);
	}
	else if (i < j && j > k && i > k)
		rra(a);
}

void	ft_sort_4(t_stack **a, t_stack **b)
{
	int pos;

	pos = ft_find_pos(*a, 0);
	if (pos == 1)
		ra(a);
	else if (pos == 2)
	{
		ra(a);
		ra(a);
	}
	else if (pos == 3)
		rra(a);
	pb(a , b);
	ft_sort_3(a);
	pa(a, b);
}

void	ft_sort_5(t_stack **a, t_stack **b)
{
	int	pos;

	while (ft_stack_size(*a) > 3)
	{
		pos = ft_find_pos(*a, 0);
		if (pos == 0)
			pb(a, b);
		else if (pos <= 2)
			ra(a);
		else
			rra(a);
	}
	ft_sort_3(a);
	pa(a, b);
	pa(a, b);
}