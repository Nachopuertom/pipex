/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:43:57 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/02/04 20:10:29 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief Allocates memory to join two strings
/// @return a pointer to the new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*tab;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	tab = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, (char *)s1, s1_len + 1);
	ft_strlcat(tab, (char *)s2, s1_len + s2_len + 1);
	return (tab);
}
