/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:21:28 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 16:21:51 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int val)
{
	if (val >= 32 && val <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int yo = '\n';

    printf("%d\n", ft_isprint(yo));
}*/
