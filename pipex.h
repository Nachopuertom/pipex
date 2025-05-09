/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:16:41 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/02/06 13:47:45 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <sys/wait.h>
# include "libft/libft.h"
# include <fcntl.h>

int		main(int argc, char **argv, char **env);
char	*get_path(char *cmd, char **path);
int		open_input(char *file);
int		open_output(char *file);
void	exit_error(int err);
void	throw_error(char *msg);
int		open_fdout(char *argv);
int		open_fdin(char *argv);
void	do_fork(char *cmd, char **env, int fd_in);

#endif