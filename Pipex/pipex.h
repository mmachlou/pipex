/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:54:45 by mmachlou          #+#    #+#             */
/*   Updated: 2024/07/27 09:55:35 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <fcntl.h>
# include <error.h>
# include <string.h>
# include <sys/wait.h>

void	ft_error(void);
char	*find_path(char *cmd, char **envp);
void	execute(char *av, char **envp);

#endif
