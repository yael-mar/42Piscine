/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 10:10:29 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/20 12:05:06 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int*) * (max - min));
	if (!range)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 5;
	int max = 10;
	int *range = ft_range(min, max);

	if (range)
	{
		while (min < max)
		{
			printf("%d ", range[i]);
		}
		free(range);
	}
	else
	{
		printf("Invalid range or memory allocation failed.\n");
	}

	return (0);
}*/