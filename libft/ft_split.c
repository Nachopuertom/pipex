/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:41:59 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/02/06 13:43:12 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c);
static char		*get_word(int *j, char const *str, char c);
static void		free_split(char **split, int i);

/// @brief divide a string into a list (or array) 
/// of substrings based on a specified delimiter. 
char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	words = count_words(s, c);
	split = ft_calloc(sizeof(char *), (words + 1));
	if (!split)
		return (NULL);
	while (i < words)
	{
		split[i] = get_word(&j, s, c);
		if (!split[i])
		{
			free_split(split, i);
			return (NULL);
		}
		i++;
	}
	split[words] = 0;
	return (split);
}

static void	free_split(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return ;
}

static char	*get_word(int *j, char const *str, char c)
{
	int		count;
	int		i;
	char	*tab;

	while (str[*j] == c)
		(*j)++;
	i = *j;
	while (str[i] != c && str[i])
		i++;
	count = i - *j;
	tab = ft_calloc(sizeof(char), (count + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		tab[i] = str[*j];
		(*j)++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	in_word;
	int	words;

	in_word = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else
		{
			if (!in_word && s[i] != '\0')
			{
				words++;
				in_word = 1;
			}
		}
		i++;
	}
	return (words);
}
