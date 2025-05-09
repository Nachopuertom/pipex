/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:16:45 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 21:40:56 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// #include <ctype.h>
// char to_uppercase(unsigned int index, char c) {
// 	return (char)toupper((unsigned char)c);
// }
// int main() {
// 	const char *str = "hello, world!";
// 	char *result = ft_strmapi(str, to_uppercase);

// 	if (result) {
// 		printf("string: '%s'\n", result);
// 		free(result);
// 	} 

// 	return 0;
// }
