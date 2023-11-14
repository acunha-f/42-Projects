/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:32:52 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 21:35:57 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = malloc(sizeof(char) * len);
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start - 1])
	{
		sub[i] = s[start - 1];
		i++;
		start++;
	}
	return (sub);
}
/*
int main(void)
{
	char	*t;

	t = ft_substr("aloalo", 3, 3);
	printf("%s\n", t);
	free(t);
}*/
