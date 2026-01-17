/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:49:51 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/17 10:54:29 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_build_stack(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*new;
	long	value;
	int		i;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		if (!ft_is_num(argv[i]))
			ft_error(stack);
		value = ft_atol(argv[i]);
		if (!ft_check_int(value))
			ft_error(stack);
		new = ft_stack_new((int)value);
		if (!new)
			ft_error(stack);
		ft_stack_add_back(&stack, new);
		i++;
	}
	if (!ft_duplicates(stack))
		ft_error(stack);
	return (stack);
}
