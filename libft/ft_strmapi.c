/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:00:06 by marvin            #+#    #+#             */
/*   Updated: 2023/12/07 11:13:25 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		sub[i] = f(i, s[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
static char	auxmain(unsigned int j, char c)
{
	if (j < 0)
		return (0);
	return (c++);
}

int	main(void)
{
	char	*str = "yoyoyo";
	char	*res;

	res = ft_strmapi(str, auxmain);
	printf("%s\n", res);
}
 */
