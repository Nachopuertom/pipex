/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:50:06 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:49:44 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief  used to safely copy one string into another, ensuring that the
/// destination buffer is properly null-terminated
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
// int main()
// {
// 	char 	dest[100];
// 	ft_strlcpy(dest, "hola", 3);
// 	printf("%s", dest);
// 	return 0;
// }
