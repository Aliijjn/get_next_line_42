/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akuijer <akuijer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 15:37:21 by akuijer       #+#    #+#                 */
/*   Updated: 2023/11/29 14:00:28 by akuijer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strclen(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strlst(const char *s, const char *list, int list_len);
char	*get_next_line(int fd);

#endif
