/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 09:52:29 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/06 09:54:57 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d, Modulus: %d\n", div, mod);
	return (0);
}
*/