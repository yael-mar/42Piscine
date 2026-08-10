/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:39:06 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:41:44 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int	i;
    int	j;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "World!";
    
    printf("Before concatenation: %s\n", dest);
    ft_strcat(dest, src);
    printf("After concatenation: %s\n", dest);
    
    return 0;
    */