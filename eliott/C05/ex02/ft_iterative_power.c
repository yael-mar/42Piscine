/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 11:22:31 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 16:06:31 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = 0;
	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		r = nb * r;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int q = 2;
	int a = 3;
	printf("%d power %d equal %d", q, a, ft_iterative_power(q, a));
}*/