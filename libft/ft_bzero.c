/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:56:22 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 16:35:56 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief fills “Len” bytes with 0 value
void	ft_bzero(void *s, int len)
{
	while (len > 0)
		((char *)s)[--len] = 0;
}

// int main()
// {
// 	char	str[] = "Hello, World!";
// 	int		size = 5;

// 	printf("'\n\n");
// 	printf("------------- FT_BZERO TEST -------------%c\n", '\n');

// 	printf("Bytes deled:		'%d'\n", size);
// 	printf("Before: 		'%s'\n", str);
// 	ft_bzero(str, size);
// 	printf("After: 			'");
// 	for (int i = size; str[i] != '\0'; i++) {
// 		printf("%c", str[i]);
// 	}
// 	printf("'\n\n");
// 	printf("----------------------------------------%c\n", '\n');
// 	return (0);
// }