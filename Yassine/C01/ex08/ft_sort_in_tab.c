/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasel-ma <elmardiyassine00@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:59:31 by yasel-ma          #+#    #+#             */
/*   Updated: 2026/08/07 11:59:31 by yasel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_in_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while(i < size)
	{
		j = 0;
		while(j < size)
		{
			if (tab[i] <= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
