/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:15:54 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/11 19:37:54 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*t;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = t[i];
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return ('\0');
	ft_memmove(av[1], av[2], 5);
}
