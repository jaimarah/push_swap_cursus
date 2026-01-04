/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 14:40:29 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/04 14:42:11 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chunk_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stack_size(*a);
	ft_push_chucks(a, b, size);
	push_back(a, b);
}