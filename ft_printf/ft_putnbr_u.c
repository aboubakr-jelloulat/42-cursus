/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:40:42 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/20 13:40:47 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += ft_putchar(nb + 48);
	}
	else
	{
		count += ft_putnbr_u (nb / 10);
		count += ft_putnbr_u (nb % 10);
	}
	return (count);
}
