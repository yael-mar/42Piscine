/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:37:55 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/07 09:47:26 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello123";
	char	str3[] = "Hello World";

	printf("String 1: %s - Is alpha: %d\n", str1, ft_str_is_alpha(str1));
	printf("String 2: %s - Is alpha: %d\n", str2, ft_str_is_alpha(str2));
	printf("String 3: %s - Is alpha: %d\n", str3, ft_str_is_alpha(str3));
	return (0);
}
*/