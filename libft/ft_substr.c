/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:05:55 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 14:53:25 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
