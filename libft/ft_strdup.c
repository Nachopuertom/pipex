/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:59:45 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:50:46 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief create a copy of a string by dynamically allocating
/// memory for the new string 
char	*ft_strdup(char *src)
{
	char	*tab;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	tab = (char *)malloc(sizeof(*tab) * len + 1);
	if (tab == NULL)
		return (NULL);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
// int main()
// {
// 	char	str[5] = "holas";
// 	char	*result = ft_strdup(str);
// 	printf("%s", result);
// 	return 0;
// }
