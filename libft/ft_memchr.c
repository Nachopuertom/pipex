/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:54:29 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:50:25 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locate the first occurrence of a specific byte in a block of memory
void	*ft_memchr(const void *s, int c, int n)
{
	int					i;
	const unsigned char	*ptr;
	unsigned char		find;

	find = (unsigned char)c;
	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == find)
			return ((unsigned char *)&ptr[i]);
		i++;
	}
	return (0);
}
// int main() {
// 	char str[] = "Hello, World!";
// 	char *result;
// 	result = ft_memchr(str, 'o', 10);
// 	if (result != NULL) {
// 		printf("FOund '%c' in position: %ld\n", *result, result - str);
// 	} else {
// 		printf("Not found\n");
// 	}
// 	return 0;
// }
