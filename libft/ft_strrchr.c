/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:09:29 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/22 12:09:34 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;

	last = ft_strlen(s);
	while (last >= 0)
	{
		if (s[last] == (char)c)
			return ((char *)&s[last]);
		last --;
	}
	return (NULL);
}
