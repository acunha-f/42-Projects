/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:23:49 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 16:24:22 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int val)
{
	if (val >= 'a' && val <= 'z')
		return (1);
	if (val >= 'A' && val <= 'Z')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
    int yo = 'a';

    printf("%d\n", ft_isalpha(yo));
}*/
