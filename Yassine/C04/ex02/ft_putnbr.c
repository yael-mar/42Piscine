/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasel-ma <elmardiyassine00@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:17:54 by yasel-ma          #+#    #+#             */
/*   Updated: 2026/08/20 14:25:05 by yasel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
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
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}
/*
int	main(void)
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
	return (0);
}*/
