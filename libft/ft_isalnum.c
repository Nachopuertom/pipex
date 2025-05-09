/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:32:56 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:49:20 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 48 && c <= 57) && !(c >= 65 && c <= 90)
		&& !(c >= 97 && c <= 122))
		return (0);
	return (1);
}

// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];
// 	printf("\n\n");
// 	printf("------------- FT_ISALNUM TEST -------------%c\n", '\n');
// 	if (ft_isalnum(c))
// 		printf("'%c'is alphanumeric.\n", c);
// 	else
// 		printf("'%c\n\n' 	is not alphanumeric.\n", c);
// 		printf("\n");
// 		printf("----------------------------------------");	
// 	return (0);
// }
