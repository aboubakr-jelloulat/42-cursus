/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:02:29 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/24 17:16:49 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(va_list ap, char format)
{
	int	count;

	count = 0;
	if (format == '%')
		count = ft_putchar('%');
	else if (format == 'i' || format == 'd')
		count = ft_putnbr(va_arg(ap, int));
	else if (format == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (format == 'u')
		count = ft_putnbr_u(va_arg(ap, unsigned int));
	else if (format == 'X')
		count = ft_putnbr_base(va_arg(ap, unsigned int), format);
	else if (format == 'x')
		count = ft_putnbr_base(va_arg(ap, unsigned int), format);
	else if (format == 'p')
		count = ft_print_add(va_arg(ap, void *));
	else
	{
		count = ft_putchar(format);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	va_start(ap, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				count += ft_check_format(ap, str[++i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end (ap);
	return (count);
}
