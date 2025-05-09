/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:13:09 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:44:31 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief compare two blocks of memory, byte by byte.
int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (i < n)
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (s1 - s2);
}

// int main() {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, World!";
// 	int result = ft_memcmp(str1, str2, 13);

// 	printf("%d\n", result);
// 	return 0;
// }
