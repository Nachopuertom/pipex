/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:28:07 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/21 14:08:18 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief find the first occurrence of a specified character in a given string.
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
// int main() {
// 	const char *str = "Hello, world!";
// 	char c = 'o';

// 	char *result = ft_strchr(str, c);
// 	printf("\n");
// 	printf("------------- FT_STRCHR TEST -------------%c\n", '\n');
// 	if (result) {
// 		printf("Found first occurrence of '%c': %s\n", c, result); 
// 	} else {
// 		printf("Character '%c' not found.\n", c);
// 	}
// 	printf("\n");
// 	printf("-------------------------------------------%c\n", '\n');
// 	return 0;
// }
