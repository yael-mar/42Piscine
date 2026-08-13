/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasel-ma <elmardiyassine00@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:46:46 by yasel-ma          #+#    #+#             */
/*   Updated: 2026/08/11 15:56:42 by yasel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != '0')
	{
		j = 0;
		if (str[i + j] != to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str);
		i++;
	}
	return (0);
}
