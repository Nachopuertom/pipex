/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:47:29 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 23:45:03 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Find the last occurence of a specified char in a given string.
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
// int main() {
// 	const char *str = "Hello, world!";
// 	char c = 'o';

// 	char *result = ft_strrchr(str, c);
// 	printf("\n");
// 	printf("------------- FT_STRCHR TEST -------------%c\n", '\n');
// 	if (result) {
// 		printf("Found last occurrence of '%c': %s\n", c, result);
// 	} else {
// 		printf("Character '%c' not found.\n", c);
// 	}
// 	printf("\n");
// 	printf("-------------------------------------------%c\n", '\n');

// 	return 0;
// }
