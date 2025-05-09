/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:01:05 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/02/06 13:50:56 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_fdin(char *argv)
{
	int	fd_in;

	fd_in = open(argv, O_RDONLY);
	if (fd_in == -1)
		exit_error(1);
	return (fd_in);
}

int	open_fdout(char *argv)
{
	int	fd_out;

	fd_out = open(argv, O_RDONLY);
	if (fd_out == -1)
		exit_error(1);
	return (fd_out);
}

void	throw_error(char *msg)
{
	ft_putstr_fd(msg, 2);
}

void	exit_error(int err)
{
	throw_error("Error\n");
	exit(err);
}

char	*get_path(char *cmd, char **env)
{
	char	**all_path;
	char	*path;
	char	*temp;
	int		i;

	i = 0;
	while (!ft_strnstr(env[i], "PATH=", 5))
		i++;
	all_path = ft_split(env[i] + 5, ':');
	i = -1;
	while (all_path[++i])
	{
		temp = ft_strjoin(all_path[i], "/");
		path = ft_strjoin(temp, cmd);
		free (temp);
		if (access(path, F_OK) == 0)
			return (free_matrix(all_path), path);
	}
	free(path);
	free_matrix(all_path);
	return (perror("Error\n"), NULL);
}
