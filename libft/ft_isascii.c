/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:12:25 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:24:16 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];
// 	printf("\n\n");
// 	printf("------------- FT_ISASCII TEST -------------%c\n", '\n');
// 	if (ft_isascii(c))
// 		printf("'%c'is ascii.\n", c);
// 	else
// 		printf("'%c'is not ascii.\n", c);
// 		printf("\n");
// 	printf("-------------------------------------------");
// 	return (0);
// }
