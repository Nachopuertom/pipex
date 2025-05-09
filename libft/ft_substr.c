/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:10:07 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 23:54:21 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Create a substring from 'start' to 'len' of 's'
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	size_t				i;	
	size_t				s_len;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// int main() {
// 	const char *str = "Hello, world!";
// 	unsigned int start = 17;
// 	size_t len = 0;

// 	char *substr = ft_substr(str, start, len);
// 	printf("\n\n");
// 	printf("------------- FT_SUBSTR TEST -------------%c\n", '\n');
// 	printf("String: %s\n", str);
// 	printf("Start: %d\n", start);
// 	printf("Len: %zu\n", len);

// 	if (substr) {
// 		printf("Substring: %s\n", substr);
// 		free(substr);
// 	}
// 	printf("\n");
// 	printf("----------------------------------%c\n", '\n');

// 	return 0;
// }
