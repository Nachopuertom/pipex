/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:49:47 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:08:17 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_digit(int nb, char *result, int i);
static int	get_length(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	int		is_negative;

	is_negative = (n < 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = get_length(n);
	result = (char *)malloc(sizeof(char) * (count + is_negative + 1));
	if (!result)
		return (NULL);
	result[count + is_negative] = '\0';
	if (is_negative && n != 0)
	{
		result[0] = '-';
		n = -n;
	}
	get_digit(n, result, count + is_negative - 1);
	return (result);
}

static int	get_length(int n)
{
	int	result;
	int	n_aux;

	n_aux = n;
	if (n == 0)
		result = 1;
	else
		result = 0;
	while (n_aux != 0)
	{
		result++;
		n_aux /= 10;
	}
	return (result);
}

static char	*get_digit(int nb, char *result, int i)
{
	char	num_char;
	int		num;

	num = nb;
	if (num / 10 != 0)
	{
		get_digit(num / 10, result, i - 1);
	}
	num_char = '0' + nb % 10;
	result[i] = num_char;
	return (result);
}
