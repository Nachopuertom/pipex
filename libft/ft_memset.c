/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:31:33 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 18:33:52 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief  Fill a block of memory with a specific value.
/// @return ptr
void	*ft_memset(void *s, int c, size_t len)
{
	while (len > 0)
		((unsigned char *)s)[--len] = c;
	return (s);
}
// int main(void)
// {
// 	char *s;
// 	int c;
// 	size_t len;
// 	void *result;
// 	s = ft_strdup("hello world");
// 	c = 'a';
// 	len = 15;
// 	result = ft_memset((void *) s,c,len);
// 	printf("%s", (char *)result);
// 	free (s);
// 	return 0;	
// }
