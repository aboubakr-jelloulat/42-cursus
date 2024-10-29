/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 06:03:56 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/29 19:39:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte;
	size_t			i;

	byte = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		byte[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
