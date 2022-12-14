/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <njerasea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:51:23 by njerasea          #+#    #+#             */
/*   Updated: 2022/12/14 16:50:04 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//# define BUFFER_SIZE 15

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <fcntl.h>
# include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char    *ft_readtojoid(int fd, char *keep);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char    *ft_keepline(char *keep, int lenline);
char    *ft_cutline(char *keep, int lenline);

size_t  ft_strlen_modi(char *str, char epx);
char	*ft_strdup(char *s1, int len);
int ft_strlen_mo(char *str, char exp);

#endif