/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:09:54 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:11:04 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "Hello123";

	printf("String 1: %s - Lowercase: %s\n", str1, ft_strlowcase(str1));
	printf("String 2: %s - Lowercase: %s\n", str2, ft_strlowcase(str2));
	printf("String 3: %s - Lowercase: %s\n", str3, ft_strlowcase(str3));
	return (0);
}
*/