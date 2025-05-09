/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:00:35 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:47:17 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copy a block of memory from one location to another.
void	*ft_memcpy(void *dest, const void *src, int len)
{
	unsigned char			*d;
	const unsigned char		*s;
	int						i;

	d = dest;
	s = src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     ft_memcpy(dest, src, 13);
//     printf("%s\n", dest);

//     return 0;
// }
