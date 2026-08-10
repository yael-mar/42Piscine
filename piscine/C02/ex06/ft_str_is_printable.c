/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:51:32 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:12:25 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!\n";
	char	str3[] = "Hello, World!\t";

	printf("String 1: %s - Is printable: %d\n", str1,
		ft_str_is_printable(str1));
	printf("String 2: %s - Is printable: %d\n", str2,
		ft_str_is_printable(str2));
	printf("String 3: %s - Is printable: %d\n", str3,
		ft_str_is_printable(str3));
	return (0);
}
*/