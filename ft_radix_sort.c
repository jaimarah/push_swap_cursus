/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:27:37 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/16 16:09:20 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_stack **a, t_stack **b)
{
	int	max_bits;
	int	size;
	int	bit;
	int	i;

	max_bits = ft_get_max_bits(*a);
	bit = 0;
	while (bit < max_bits)
	{
		size = ft_stack_size(*a);
		i = 0;
		while (i < size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}