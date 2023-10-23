/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:02:51 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 19:48:06 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, int n)
{
	int				i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}
/*
int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    ft_bzero(av[1], 5);
    printf("%s\n", av[1]);
}*/
