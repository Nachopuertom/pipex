/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:39:47 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:54:00 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <fcntl.h>
// #include <unistd.h> 
// int main() {
//     int fd = open("output.txt", O_WRONLY);
// 	char	*str = "hello";
//     ft_putstr_fd(str, fd);
//     close(fd);
//     printf("Character written to output.txt\n");
//     return 0;
// }