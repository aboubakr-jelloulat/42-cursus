/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:56:41 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/26 09:09:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc (sizeof(char) * n + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i++]);
	}
	free (tab);
	return (NULL);
}

static char	*get_next_word(const char *s, char c, int *i)
{
	int	start;
	int	end;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
	}
	end = *i;
	return (ft_strndup (s + start, end - start));
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		k;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	new = malloc (sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	i = 0;
	k = 0;
	while (k < words)
	{
		new[k] = get_next_word(s, c, &i);
		if (!new[k])
			return (malloc_error(new));
		k++;
	}
	new[k] = NULL;
	return (new);
}
