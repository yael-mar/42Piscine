/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:44:12 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 09:56:55 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "hello123";

	printf("String 1: %s - Is lowercase: %d\n", str1,
		ft_str_is_lowercase(str1));
	printf("String 2: %s - Is lowercase: %d\n", str2,
		ft_str_is_lowercase(str2));
	printf("String 3: %s - Is lowercase: %d\n", str3,
		ft_str_is_lowercase(str3));
	return (0);
}
*/