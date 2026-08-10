/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:26:20 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/06 10:31:15 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		length;

	str = "Hello, World!";
	length = ft_strlen(str);
	printf("expected length of the string: 13\n");
	printf("Length of the string: %d\n", length);
	return (0);
}
*/