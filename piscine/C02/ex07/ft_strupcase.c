/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:54:03 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/10 10:10:59 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
 #include <stdio.h>
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "HELLO";
	char	str3[] = "hello123";

	printf("String 1: %s - Uppercase: %s\n", str1, ft_strupcase(str1));
	printf("String 2: %s - Uppercase: %s\n", str2, ft_strupcase(str2));
	printf("String 3: %s - Uppercase: %s\n", str3, ft_strupcase(str3));
	return (0);
}
*/