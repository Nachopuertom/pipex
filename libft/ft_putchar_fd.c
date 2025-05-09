/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:36:44 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:39:02 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// #include <unistd.h> 
// int main() {
//     int fd = open("output.txt", O_WRONLY);
//     ft_putchar_fd('A', fd);
//     close(fd);
//     printf("Character written to output.txt\n");
//     return 0;
// }