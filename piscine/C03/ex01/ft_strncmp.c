/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:31:45 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:32:52 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	char *s3 = "World";
	char *s4 = "Hell";

	printf("Comparing '%s' and '%s' with n=5: %d\n", s1, s2, ft_strncmp(s1, s2,
			5)); // Should return 0
	printf("Comparing '%s' and '%s' with n=5: %d\n", s1, s3, ft_strncmp(s1, s3,
			5)); // Should return negative value
	printf("Comparing '%s' and '%s' with n=4: %d\n", s1, s4, ft_strncmp(s1, s4,
			4)); // Should return 0
	printf("Comparing '%s' and '%s' with n=3: %d\n", s1, s4, ft_strncmp(s1, s4,
			3)); // Should return positive value

	return (0);
}*/