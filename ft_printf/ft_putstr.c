/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:46:49 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/20 12:13:56 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		return ((write (1, "(null)", 6)));
	}
	while (*str)
	{
		count += write (1, str++, 1);
	}
	return (count);
}
