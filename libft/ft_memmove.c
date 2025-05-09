/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:23:25 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:48:38 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief he memmove function in C is used to copy a block of memory from one
/// location to another, is safe to use when the memory blocks overlap. 
void	*ft_memmove(void *dest, const void *src, int len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];
//     ft_memmove(dest, src, 13);
//     printf("%s\n", dest);
//     return 0;
// }
