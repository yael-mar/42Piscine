/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elprocur <elprocur@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:38:58 by elprocur          #+#    #+#             */
/*   Updated: 2026/08/20 14:40:57 by elprocur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	count_word(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

static int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !is_charset(str[len], charset))
		len++;
	return (len);
}

static char	*make_word(char *start, int len)
{
	char	*word;
	int	 i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_tab(char **tab, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free(tab[index]);
		index++;
	}
	free(tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int	word_count_total;
	int	index;
	int	len;

	if (!str || !charset)
		return (NULL);
	word_count_total = count_word(str, charset);
	split = malloc((word_count_total + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	index = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
		{
			len = word_len(str, charset);
			split[index] = make_word(str, len);
			if (!split[index])
			{
				free_tab(split, index);
				return (NULL);
			}
			index++;
			str += len;
		}
	}
	split[index] = NULL;
	return (split);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    int i = 0;
    char **str = ft_split(argv[1], argv[2]);

    if(argc != 3)
    {
        printf("Trop/Pas assez d'arg relance stp c'est pas mon code le prblm\n");
        
        return (0);
    }
    while(i < count_word(argv[1], argv[2]))
    {
        printf("%s\n", str[i]);
        i++;
    } 
}*/