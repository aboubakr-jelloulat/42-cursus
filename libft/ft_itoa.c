/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:01:43 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/31 13:03:36 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_of_number(int nb)
{
	int	counter;

	counter = 0;
	if (nb <= 0)
		counter++;
	while (nb)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;

	len = ft_len_of_number(n);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	new[len] = '\0';
	if (n == 0)
		new[0] = '0';
	if (n < 0)
		new[0] = '-';
	while (n)
	{
		if (n < 0)
			new[--len] = ((n % 10) * -1) + '0';
		else
			new[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (new);
}
