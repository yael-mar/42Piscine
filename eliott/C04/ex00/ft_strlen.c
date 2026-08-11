/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:14:44 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 10:17:26 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		length;

	str = "Hello, world!";
	length = ft_strlen(str);
	printf("Expected length of the string: 13\n");
	printf("Function length of the string: %d\n", length);
	return (0);
}
*/