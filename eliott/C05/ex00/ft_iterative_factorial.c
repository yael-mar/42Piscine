/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:48:48 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 10:49:54 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int r;

	if (nb < 0)
		return (0);
	r = 1;
	while (nb > 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}