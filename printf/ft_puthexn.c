/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:23:08 by acunha-f          #+#    #+#             */
/*   Updated: 2024/02/26 19:22:46 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexn(unsigned long int n, char *base)
{
	int	res;
	int	count;

	count = 0;
	res = n % 16;
	if (n >= 16)
		count += ft_puthexn(n / 16, base);
	write(1, &base[res], 1);
	count++;
	return (count);
}
