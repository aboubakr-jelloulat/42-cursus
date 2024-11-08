/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:06:36 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/05 19:35:58 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1_dst;
	unsigned char	*s2_src;

	if (dst == src || n == 0)
		return (dst);
	s1_dst = (unsigned char *)dst;
	s2_src = (unsigned char *)src;
	while (n--)
	{
		*s1_dst++ = *s2_src++;
	}
	return (dst);
}
