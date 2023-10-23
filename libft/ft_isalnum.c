/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:18:55 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 16:19:34 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int val)
{
	if ((val >= 'a' && val <= 'z') || (val >= 'A' && val <= 'Z'))
		return (1);
	if (val >= '0' && val <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int yo = '*';

    printf("%d\n", ft_isalnum(yo));
}*/
