/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:14:05 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 21:33:21 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    printf("%s\n", ft_strchr("abcdef", 'c'));
}*/
