/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:29:15 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:32:58 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	char *s3 = "World";
	char *s4 = "Hell";

	printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2));
	// Should return 0
	printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3));
	// Should return negative value
	printf("Comparing '%s' and '%s': %d\n", s1, s4, ft_strcmp(s1, s4));
	// Should return positive value

	return (0);
}