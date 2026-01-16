/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 17:02:29 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/16 12:13:48 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) == 2)
		ft_sort_2(a);
	else if (ft_stack_size(*a) == 3)
		ft_sort_3(a);
	else if (ft_stack_size(*a) == 4)
		ft_sort_4(a, b);
	else if (ft_stack_size(*a) == 5)
		ft_sort_5(a, b);
	else
		ft_radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	b = NULL;
	a = ft_build_stack(argc, argv);
	if (ft_stack_is_sorted(a))
	{
		ft_free_stack(a);
		return (0);
	}
	ft_assign_index(a);
	ft_sort(&a, &b);
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
