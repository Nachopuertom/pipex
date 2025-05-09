/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:32:16 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 23:43:48 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief  find the first occurrence of a substring in a string 
char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (n < 0)
		return (0);
	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0' && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main() {
// 	char str[] = "Hello, world!";
// 	char to_find[] = "world";
// 	unsigned int n = 12;

// 	char *result = ft_strnstr(str, to_find, n);
// 	printf("\n\n");
// 	printf("------------- FT_STRNTR TEST -------------%c\n", '\n');
// 	printf("String: %s\n", str);
// 	printf("To find: %s\n", to_find);
// 	printf("Len: %d\n", n);
// 	printf("\n");
// 	if (result) {
// 		printf("Found substring: %s\n", result);
// 	} else {
// 		printf("Substring not found.\n");
// 	}
// 	printf("\n");
// 	printf("------------------------------------------%c\n", '\n');

// 	return 0;
// }
