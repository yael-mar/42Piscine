/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:37:07 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/20 12:23:31 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	full_length(int size, char **strs)
{
	int	j;
	int	i;
	int	total;

	j = 0;
	total = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			total++;
			i++;
		}
		j++;
	}
	return (total);
}

int	sep_len(char *sep)
{
	int	len_sep;

	len_sep = 0;
	while (sep[len_sep] != '\0')
		len_sep++;
	return (len_sep);
}

char	*copy_strs(char **strs, int size, char *strf, char *sep)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			strf[k++] = strs[j][i++];
		if (j < size - 1)
		{
			i = 0;
			while (sep[i] != '\0')
				strf[k++] = sep[i++];
		}
		j++;
	}
	strf[k] = '\0';
	return (strf);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strf;
	int		total_len;

	if (size <= 0)
	{
		strf = malloc(1);
		if (!strf)
			return (NULL);
		strf[0] = '\0';
		return (strf);
	}
	total_len = full_length(size, strs) + sep_len(sep) * (size - 1);
	strf = malloc(total_len + 1);
	if (!strf)
		return (NULL);
	return (copy_strs(strs, size, strf, sep));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[3] = {"Hello", "42", "Belgium"};
	char	*sep;
	char	*result;

	sep = "____";
	result = ft_strjoin(3, strs, sep);
	printf("%s", result);
}
*/