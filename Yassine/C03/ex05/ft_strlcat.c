/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasel-ma <elmardiyassine00@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:07:03 by yasel-ma          #+#    #+#             */
/*   Updated: 2026/08/11 16:30:11 by yasel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_length;
	unsigned int src_length;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_length = j;
	if (size <= dest_length)
		return (size + src_length);
	i = dest_length;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_length + src_length);
}
