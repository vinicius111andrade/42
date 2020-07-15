/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:03:11 by vde-melo          #+#    #+#             */
/*   Updated: 2020/02/07 15:07:42 by vde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_calloc(size_t count, size_t size);
void		delstr(char **c);
int			copy_line(char **line, char **s, int fd);
int			check_read(int reading, char **line, char **s, int fd);

#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif
