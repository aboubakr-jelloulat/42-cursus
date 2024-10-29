/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:01:06 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/04 20:48:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && !dstsize)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
		return (src_len + dstsize);
	else
		dstsize -= dest_len;
	ft_strlcpy(dst + dest_len, src, dstsize);
	return (dest_len + src_len);
}
