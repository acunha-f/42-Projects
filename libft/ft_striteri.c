/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:24:43 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 19:24:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	auxmain(unsigned int j, char *s)
{
	if (j != 0)
		s[j] += s[j - 1];
}

int	main(void)
{
	char	*str = "yoyoyo";

	ft_striteri(str, auxmain);
	printf("%s\n", str);
}
 */
