/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:25:52 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:22:08 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Convert array to int
int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result *= sign);
}
// int main ()
// {
// 	printf("%c\n", '\n');
//     printf("------------- FT_ATOI TEST -------------%c\n", '\n');
//     printf("value: '   42', 		result: %d\n", ft_atoi("   42"));
// 	printf("value: '-++--42', 		result: %d\n", ft_atoi("-++--42"));
// 	printf("value: '-42', 			result: %d\n", ft_atoi("-42"));
// 	printf("value: '42', 			result: %d\n", ft_atoi("42"));
// 	printf("value: '0', 			result: %d\n", ft_atoi("0"));
// 	printf("value: '2147483647',		result: %d\n", ft_atoi("2147483647"));
// 	printf("value: '-2147483648',		result: %d\n", ft_atoi("-2147483648"));
// 	printf("value: ' ', 			result: %d\n", ft_atoi(" "));
// 	printf("value: '-++-', 			result: %d\n", ft_atoi("-++-"));
// 	printf("value: '', 			result: %d\n", ft_atoi(""));
// 	printf("-----------------------------------------%c\n", '\n');

// 	int result = atoi("43");
// 	printf("%d", result);

// 	return 0;
// }
