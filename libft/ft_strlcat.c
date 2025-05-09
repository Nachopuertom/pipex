/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:25:03 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 17:28:30 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief oncatenate two strings, ensuring that the destination string
/// is null-terminated and preventing buffer overflow by specifying 
/// the maximum size

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	d_len = ft_strlen(dest);
	i = d_len;
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}
// int main()
// {
// 	char	dest[100] = "hola";
// 	char	*out;

// 	ft_strlcat(dest, " mundo", 11);
// 	printf("%s", dest);
// 	return 0;
// }
