/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:28:59 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 21:29:56 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
/*
int main(void)
{
    printf("%s\n", ft_strdup("aloboi"));
}*/
