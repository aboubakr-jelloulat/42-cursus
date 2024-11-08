/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:09:15 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 15:30:01 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		u;
	int		full_len;

	if (!s1 || !s2)
		return (NULL);
	full_len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc (sizeof(char) * full_len + 1);
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
