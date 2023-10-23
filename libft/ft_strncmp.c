/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:28:45 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 16:29:51 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] - s2[i] > 0)
			return (1);
		if (s1[i] - s2[i] < 0)
			return (-1);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac != 3)
        return (0);
    printf("%d\n", ft_strncmp(av[1], av[2], 5));
}*/
