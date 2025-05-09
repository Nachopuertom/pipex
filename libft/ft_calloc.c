/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:47:10 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 19:49:38 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocate memory as Malloc but filled with 0
/// @return Pointer to a memory slot
void	*ft_calloc(int nmemb, int size)
{
	int	*tab;

	tab = (int *)malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
// int main()
// {
//     int *arr;
//     int nmemb = 10;
//     int size = 0;

//     arr = (int *)ft_calloc(nmemb, size);
//     free(arr);
//     return 0;
// }