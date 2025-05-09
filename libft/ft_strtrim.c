/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:05:55 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/25 21:30:08 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief remove the specified char from both ends of a string.
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j + 1) - i));
}

// int main(int argc, char *argv[]) {

// 	const char *str = argv[1];
// 	const char *set = argv[2];

// 	char *result = ft_strtrim(str, set);
// 	if (result) {
// 		printf("Trimmed string: '%s'\n", result);
// 		free(result);
// 	}
// 	return 0;
// }
