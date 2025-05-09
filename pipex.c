/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:35:18 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/05/08 20:37:32 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	run_exve(char *cmd, char **env)
{
	char	**full_cmd;
	char	*path;

	full_cmd = ft_split(cmd, ' ');
	if (!full_cmd[0])
	{
		free_matrix(full_cmd);
		throw_error("invalid commands\n");
		exit_error(1);
	}
	path = get_path(full_cmd[0], env);
	if (!path)
	{
		free_matrix(full_cmd);
		exit(127);
	}
	if (execve(path, full_cmd, env) == -1)
	{
		free(path);
		free_matrix(full_cmd);
		throw_error("Execve failed\n");
		exit_error(1);
	}
}

int	check_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5) && env[i][5])
			return (1);
		i++;
	}
	throw_error("Path not available\n");
	return (0);
}

void	do_fork(char *cmd, char **env, int fd_in)
{
	int		pip[2];
	pid_t	pid;

	pipe(pip);
	pid = fork();
	if (pid == -1)
	{
		perror("Error\n");
		exit(1);
	}
	if (pid == 0)
	{
		close(pip[0]);
		dup2(fd_in, STDIN_FILENO);
		dup2(pip[1], STDOUT_FILENO);
		close(pip[1]);
		close(fd_in);
		run_exve(cmd, env);
	}
	else
	{
		close(pip[1]);
		dup2(pip[0], STDIN_FILENO);
		close(pip[0]);
	}
}

int	main(int argc, char **argv, char **env)
{
	int		fd_in;
	int		fd_out;
	int		pid;

	if (argc != 5)
		return (throw_error("Invalid number of arguments (4)\n"), 1);
	fd_in = open(argv[1], O_RDONLY);
	fd_out = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (!check_env(env))
		return (throw_error("Error\n"), 1);
	do_fork(argv[2], env, fd_in);
	pid = fork();
	if (pid == 0)
	{
		dup2(fd_out, STDOUT_FILENO);
		run_exve(argv[3], env);
	}
	{
		close(fd_in);
		close(fd_out);
		waitpid(pid, NULL, 0);
	}
	return (0);
}
