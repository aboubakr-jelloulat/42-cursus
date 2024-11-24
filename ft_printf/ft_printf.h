/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:03:28 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/22 20:41:37 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char	*str);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_base(unsigned int nb, char flag);
int	ft_print_add(void *ptr_addr);

#endif