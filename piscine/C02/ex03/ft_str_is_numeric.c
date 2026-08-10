/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:40:05 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/07 09:44:27 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "12345";
	char	str2[] = "123abc";
	char	str3[] = "123 456";

	printf("String 1: %s - Is numeric: %d\n", str1, ft_str_is_numeric(str1));
	printf("String 2: %s - Is numeric: %d\n", str2, ft_str_is_numeric(str2));
	printf("String 3: %s - Is numeric: %d\n", str3, ft_str_is_numeric(str3));
	return (0);
}*/