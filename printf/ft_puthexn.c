/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:23:08 by acunha-f          #+#    #+#             */
/*   Updated: 2024/02/28 17:11:56 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexn(unsigned long long int n, char *base)
{
	int	length;

	length = 0;
	if (n >= 16)
	{
		length += ft_puthexn((n / 16), base);
		length += ft_puthexn((n % 16), base);
	}
	else
	{
		write(1, &base[n], 1);
		length++;
	}
	return (length);
}
