/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:27:40 by marvin            #+#    #+#             */
/*   Updated: 2024/01/25 16:27:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			count += ft_vprints(format, i, list);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
