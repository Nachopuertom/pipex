/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:45:31 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 22:46:07 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <fcntl.h>
// #include <unistd.h> 
// int main() {
// 	char *str = "hola";
//     int fd = open("output.txt", O_WRONLY);
//     ft_putendl_fd(str, fd);
//     close(fd);
//     printf("Written to output.txt\n");
//     return 0;
// }
