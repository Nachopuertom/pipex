/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:26:24 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:24:29 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];
// 	printf("\n\n");
// 	printf("------------- FT_PRINT TEST -------------%c\n", '\n');
// 	if (ft_isprint(c))
// 		printf("'%c'is printable.\n", c);
// 	else
// 		printf("'%c'is not printable.\n", c);
// 		printf("\n");
// 	printf("----------------------------------------------");
// 	return (0);
// }
