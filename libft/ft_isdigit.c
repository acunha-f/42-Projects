/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:24:46 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 16:25:08 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int val)
{
	if (val >= '0' && val <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int yo = '4';

    printf("%d\n", ft_isdigit(yo));
}*/
