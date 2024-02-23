/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:40:33 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 19:59:23 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (dst != NULL && size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
/*
int main(void)
{
    char    a[6] = "12345";

    printf("%d\n", ft_strlcpy(a, "abcde", 6));
}*/
