/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:46:25 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/12 10:31:14 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dl = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	sl = j;
	if (size <= dl)
		return (size + sl);
	i = dl;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dl + sl);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	unsigned int size = 20;

	printf("Before concatenation: %s\n", dest);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("After concatenation: %s\n", dest);
	printf("Total length: %u\n", result);

	return (0);
}
*/
