/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:09:22 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 21:12:34 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	d = i;
	while (j < size - d - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (j + d);
}
/*
int main(void)
{
    char    a[50] = "12345";

    printf("%d\n", ft_strlcat(a, "abcde", 11));
}*/
