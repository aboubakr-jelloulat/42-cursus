/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:16:12 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/25 14:24:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	len_of_number(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = len_of_number(n);
	ptr = malloc (len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n)
	{
		if (n < 0)
			ptr[--len] = (~(n % 10) + 1) + '0';
		else
			ptr[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}
