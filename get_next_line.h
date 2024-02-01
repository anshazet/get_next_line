/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashalagi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:23:14 by ashalagi          #+#    #+#             */
/*   Updated: 2023/03/03 08:36:32 by ashalagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*init_string(void);
char	*ft_strjoin(char *s1, char *s2);
void	copy_string_contents(char *s1, char *s2);
size_t	ft_strlen(const char *s);
int		find_line(char *buf, char **line);
char	*free_line(char **line);
char	*ft_count(int fd, char *buf, char *line);

#endif
