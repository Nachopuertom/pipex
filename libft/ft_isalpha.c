/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:28:26 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:23:55 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];
// 	printf("\n\n");
// 	printf("------------- FT_ISALPHA TEST -------------%c\n", '\n');
// 	if (ft_isalpha(c))
// 		printf("'%c'is alpha.\n", c);
// 	else
// 		printf("'%c'is not alpha.\n", c);
// 		printf("\n");
// 	printf("-------------------------------------------");
// 	return (0);
// }
