/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akuijer <akuijer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 12:59:15 by akuijer       #+#    #+#                 */
/*   Updated: 2023/11/29 14:00:10 by akuijer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *str, size_t n)
{
	while (n--)
	{
		((char *)str)[n] = 0;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 0;
		size = 0;
	}
	if (nmemb && (size * nmemb) / nmemb != size)
	{
		return (0);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (0);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

size_t	ft_strclen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)s + i);
	}
	return (0);
}

char	*ft_strlst(const char *s, const char *list, int list_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (j < list_len)
		{
			if (s[i] == list[j++])
			{
				return ((char *)s + i);
			}
		}
		j = 0;
		i++;
	}
	while (j < list_len)
	{
		if (s[i] == list[j++])
		{
			return ((char *)s + i);
		}
	}
	return (0);
}
