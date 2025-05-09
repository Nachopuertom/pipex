/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:51:04 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:54:13 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num_char;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	num_char = '0' + n % 10;
	ft_putchar_fd(num_char, fd);
}
// #include <fcntl.h>
// #include <unistd.h> 
// int main() {
//     int fd = open("output.txt", O_WRONLY);
//     ft_putnbr_fd(123, fd);
//     close(fd);
//     printf("Number written to output.txt\n");
//     return 0;
// }
