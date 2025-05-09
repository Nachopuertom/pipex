/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:12:11 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:55:59 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];

// 	printf("\n\n");
// 	printf("------------- FT_TOUPPER TEST -------------%c\n", '\n');

// 	printf("%c\n", ft_toupper(c));
// 	printf("\n");
// 	printf("----------------------------------------");

// 	return (0);
// }
