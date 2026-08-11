/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:49:31 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/07 09:49:56 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "Hello";
	char	str3[] = "HELLO123";

	printf("String 1: %s - Is uppercase: %d\n", str1,
		ft_str_is_uppercase(str1));
	printf("String 2: %s - Is uppercase: %d\n", str2,
		ft_str_is_uppercase(str2));
	printf("String 3: %s - Is uppercase: %d\n", str3,
		ft_str_is_uppercase(str3));
	return (0);
}
*/