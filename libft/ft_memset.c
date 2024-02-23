/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:27 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 19:24:22 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_memset(av[1], '-', 5);
    printf("%s\n", av[1]);
}*/
