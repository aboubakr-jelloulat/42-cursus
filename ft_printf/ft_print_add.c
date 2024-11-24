/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:59:00 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/22 20:38:47 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_base(unsigned long long nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb < 16)
	{
		count += ft_putchar(base[nb % 16]);
	}
	else
	{
		count += put_base(nb / 16);
		count += put_base(nb % 16);
	}
	return (count);
}

int	ft_print_add(void *ptr_addr)
{
	int					count;
	unsigned long long	nb;

	nb = (unsigned long long)ptr_addr;
	count = 0;
	count += ft_putstr("0x");
	count += put_base(nb);
	return (count);
}
