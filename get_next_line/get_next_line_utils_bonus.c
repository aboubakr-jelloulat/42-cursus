/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:08:05 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/16 13:33:10 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		u;
	int		full_len;

	if (!s1 || !s2)
		return (NULL);
	full_len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc (sizeof(char) * (full_len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	u = 0;
	while (s2[u])
	{
		new[i++] = s2[u++];
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*capy;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	capy = (char *)malloc(len * sizeof(char));
	if (!capy)
		return (NULL);
	i = 0;
	while (s1[i] && --len)
	{
		capy[i] = s1[i];
		i++;
	}
	capy[i] = '\0';
	return (capy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	new = malloc (sizeof(char) * len + 1);
	if (!new)
	{
		return (NULL);
	}
	while (len--)
	{
		new[i++] = s[start++];
	}
	new[i] = '\0';
	return (new);
}
