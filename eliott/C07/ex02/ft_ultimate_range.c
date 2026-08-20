/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:22:47 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/20 10:25:38 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	q;
	int	size;
	int	min;
	int	max;
	int	*tab;

	min = 0;
	max = 43;
	size = ft_ultimate_range(&tab, min, max);
	if (tab == NULL)
	{
		printf("error allocation\n");
		return (1);
	}
	q = 0;
	while (q < size)
	{
		printf("%d\n", tab[q]);
		q++;
	}
	free(tab);
	return (0);
}
*/