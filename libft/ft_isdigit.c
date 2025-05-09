/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:17:00 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:24:22 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// int main(int argc, char *argv[])
// {
// 	char	c = argv[1][0];
// 	printf("\n\n");
// 	printf("------------- FT_ISDIGIT TEST -------------%c\n", '\n');
// 	if (ft_isdigit(c))
// 		printf("'%c'is digit.\n", c);
// 	else
// 		printf("'%c'is not digit.\n", c);
// 		printf("\n");
// 		printf("-------------------------------------------");
// 	return (0);
// }
