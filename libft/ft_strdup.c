/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:39:28 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/04 14:03:57 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*capy;
	int		len;

	len = ft_strlen(s1) + 1;
	capy = malloc(len);
	if (!capy)
		return (NULL);
	ft_strlcpy(capy, s1, len);
	return (capy);
}
