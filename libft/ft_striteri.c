/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:30:44 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 23:09:02 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief To each character of the string 's', apply the function
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void print_char(unsigned int index, char *c)
// {
//     printf("Index: %u, Char: %c\n", index, *c);
// }
// int main()
// {
// 	char	*str = "Hello";
// 	ft_striteri(str, print_char);
// 	return 0;
// }
