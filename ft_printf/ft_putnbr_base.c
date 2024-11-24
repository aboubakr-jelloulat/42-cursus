/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:40:53 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/22 20:06:09 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char flag)
{
	int		count;
	char	*base;

	count = 0;
	if (flag == 'x')
		base = "0123456789abcdef";
	else if (flag == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
	{
		count += ft_putnbr_base(nb / 16, flag);
		count += ft_putnbr_base(nb % 16, flag);
	}
	return (count);
}
