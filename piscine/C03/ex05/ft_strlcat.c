/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:46:25 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:47:10 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + ft_strlen(src));
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + j);
}
/*
#include <stdio.h>

int	main(void)
{
	char			dest[20] = "Hello, ";
	char			src[] = "World!";
	unsigned int	size;
	unsigned int	result;

	size = 15;
	printf("Before concatenation: %s\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("After concatenation: %s\n", dest);
	printf("Total length: %u\n", result);
	return (0);
}
*/
