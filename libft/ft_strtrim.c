/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:11:25 by ajelloul          #+#    #+#             */
/*   Updated: 2024/09/26 10:52:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		end;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (end >= 0 && ft_strchr(set, s1[end]))
	{
		end--;
	}
	if (i > end)
	{
		return (ft_strdup(""));
	}
	new = malloc ((end - i) + 2);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (s1 + i), (end - i) + 2);
	return (new);
}
