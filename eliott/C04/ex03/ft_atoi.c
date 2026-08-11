/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 10:32:06 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/11 10:38:05 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int	i;
    int	sign;
    int	result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

/*
int main()
{
    char *str = "       -------++-++-12345";
    int result = ft_atoi(str);
    return 0;
}
*/