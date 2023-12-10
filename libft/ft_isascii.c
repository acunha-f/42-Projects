/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:20:39 by acunha-f          #+#    #+#             */
/*   Updated: 2023/12/10 18:56:12 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int val)
{
	if (val >= 0 && val <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int yo = 128;

    printf("%d\n", ft_isascii(yo));
}*/
