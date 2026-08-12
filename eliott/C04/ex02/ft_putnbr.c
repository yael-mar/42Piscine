/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:25:23 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 10:29:59 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    char digit = nb % 10 + '0';
    write(1, &digit, 1);
}
/*
int main(void)
{
    int a = -12345;
    int b = 0;
    int c = 67890;
    int d = -2147483648;
    int number = 42;
    ft_putnbr(number);
    write(1, "\n", 1);
    ft_putnbr(a);
    write(1, "\n", 1);
    ft_putnbr(b);
    write(1, "\n", 1);
    ft_putnbr(c);
    write(1, "\n", 1);
    ft_putnbr(d);
    write(1, "\n", 1);
    return 0;
}*/
