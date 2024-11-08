/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:15:41 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/05 18:17:40 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
	{
		dstsize = dstsize - len_dst;
	}
	ft_strlcpy(dst + len_dst, src, dstsize);
	return (len_dst + len_src);
}
