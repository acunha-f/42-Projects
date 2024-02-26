/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:17:17 by acunha-f          #+#    #+#             */
/*   Updated: 2024/02/26 18:23:12 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_unumber(unsigned int n)
{
	int	res;
	int	count;

	count = ft_countnbr(n);
	res = (n % 10) + 48;
	if (n / 10 != 0)
		ft_unumber(n / 10);
	write(1, &res, 1);
	return (count);
}
