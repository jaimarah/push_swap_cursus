/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:30:56 by jaimarah          #+#    #+#             */
/*   Updated: 2025/12/31 11:36:53 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;
	long	tmp;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (ft_isdigit(str[i]))
	{
		tmp = res;
		res = res * 10 + (str[i++] - '0');
		if (tmp != res / 10 && sign == 1)
			return (-1);
		if (tmp != res / 10 && sign == -1)
			return (0);
	}
	return (sign * res);
}
