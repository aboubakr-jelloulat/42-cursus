/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 05:12:57 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/05 16:52:11 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bayte;
	size_t			i;

	bayte = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bayte[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
