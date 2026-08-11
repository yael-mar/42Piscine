/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:03:57 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 16:06:46 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int    ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb))
        nb++;
    return (nb);
}