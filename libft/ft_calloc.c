/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:09:46 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/05 20:41:13 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	bytes;

	if (count != 0 && size > ((size_t) -1) / count)
		return (NULL);
	bytes = count * size;
	new = malloc(bytes);
	if (!new)
		return (NULL);
	ft_bzero(new, bytes);
	return (new);
}
