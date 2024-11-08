/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:09:23 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 15:24:57 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_in(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		end;

	i = 0;
	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[i] && ft_check_in(s1[i], set))
		i++;
	while (end >= i && ft_check_in(s1[end], set))
	{
		end--;
	}
	if (i > end)
	{
		return (ft_strdup(""));
	}
	return (ft_substr(s1, i, end - i + 1));
}
