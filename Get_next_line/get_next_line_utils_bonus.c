/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-melo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:59:52 by vde-melo          #+#    #+#             */
/*   Updated: 2020/02/07 15:08:02 by vde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

char		*ft_strdup(const char *s1)
{
	int		s_len;
	char	*new_s;

	s_len = ft_strlen(s1);
	if (!(new_s = malloc((s_len + 1) * sizeof(char))))
		return (0);
	while (s_len >= 0)
	{
		new_s[s_len] = (char)s1[s_len];
		s_len--;
	}
	return (new_s);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	int		k;
	char	*newstr;
	int		i;

	if (s1 == 0 || s2 == 0)
		return (0);
	k = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc((k + 1) * sizeof(*newstr));
	if (newstr == 0)
		return (0);
	i = 0;
	while (*s1)
	{
		newstr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		newstr[i] = *s2;
		s2++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char		*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

char		*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (0);
		*substr = 0;
		return (substr);
	}
	substr = (char *)malloc((len + 1) * sizeof(*substr));
	if (!substr)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
