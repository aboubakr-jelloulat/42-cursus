/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:02:28 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 16:21:52 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
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

	str = malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*ft_get_word(const char *str, char c, int *i)
{
	int	start;
	int	end;

	while (str[*i] == c)
		(*i)++;
	start = *i;
	while (str[*i] && str[*i] != c)
		(*i)++;
	end = *i;
	return (ft_strndup(str + start, end - start));
}

static char	**ft_malloc_error(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i++]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		words;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	new = malloc (sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	i = 0;
	k = 0;
	while (k < words)
	{
		new[k] = ft_get_word(s, c, &i);
		if (!new[k])
		{
			return (ft_malloc_error(new));
		}
		k++;
	}
	new[k] = NULL;
	return (new);
}
