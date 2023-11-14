/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:25:16 by acunha-f          #+#    #+#             */
/*   Updated: 2023/11/14 20:56:16 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (l[i] == '\0')
		return ((char *)&b[i]);
	while (b[i] && i < len)
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (b[i + j] == l[j] && l[j] != '\0')
				j++;
			if (i + j > len)
				return (NULL);
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    printf("%s\n", ft_strnstr("eu gos gosto bue de gosto", "gosto", 12));
} not finished */
