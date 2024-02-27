/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:11:48 by marvin            #+#    #+#             */
/*   Updated: 2024/02/19 20:11:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vprints(const char *format, int i, va_list list)
{
	i++;
	if (format[i] == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (format[i] == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (format[i] == 'i' || format[i] == 'd')
		return (ft_putnbr(va_arg(list, int)));
	if (format[i] == 'u')
		return (ft_unumber(va_arg(list, unsigned int)));
	if (format[i] == 'p')
		return (ft_printp(va_arg(list, void *)));
	if (format[i] == 'x')
		return (ft_puthexn(va_arg(list, unsigned long long int),
				"0123456789abcdef"));
	if (format[i] == 'X')
		return (ft_puthexn(va_arg(list, unsigned long long int),
				"0123456789ABCDEF"));
	if (format[i] == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
