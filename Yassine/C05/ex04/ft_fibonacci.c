/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasel-ma <elmardiyassine00@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 17:20:00 by yasel-ma          #+#    #+#             */
/*   Updated: 2026/08/12 17:20:00 by yasel-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index < 0)
		return(-1);
	if(index == 0)
		return(0);
	if(index == 1)
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
