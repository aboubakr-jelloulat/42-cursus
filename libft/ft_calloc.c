/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:03:10 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/22 23:05:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	bytes;

	bytes = count * size;
	new = malloc (bytes);
	if (!new)
	{
		return (NULL);
	}
	ft_bzero(new, bytes);
	return (new);
}
