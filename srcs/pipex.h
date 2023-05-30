/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:56:53 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/30 16:54:27 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include "lib.h"

int		ft_files(int argc, char **argv, int *i, int ffd[2]);
char	***ft_commands(char **argv, int start, int end);
int		ft_strs_size(char **strs);
int		ft_strsslen(char ***strss);
int		ft_here_doc(char **argv);

int		ft_pipe(char ***cmds, char **envp, int f_fd[2], int size);
int		ft_execve_path(char **command, char **envp);

void	ft_freel_strs(char **strs, int len);
void	ft_freel_strss(char ***strss, int len);
void	ft_perror_malloc(char *name);
void	ft_perror_nevar(char *name);
void	ft_perror(char *name1, char *name2);

void	ft_print_strss(char ***strss);
void	ft_print_strs(char **strs);
int		ft_print_ints(int *n, size_t size);
#endif
