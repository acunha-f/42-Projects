/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:05:15 by acunha-f          #+#    #+#             */
/*   Updated: 2023/11/16 18:51:36 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
/*
int main(void)
{
    int *t;
    int i;
    int j;

    i = 0;
    j = 0;
    t = ft_calloc(3, sizeof(int) * 2);
    while (i < 6)
    {
        t[i] = 1;
        i++;
    }
    while (j < 6)
    {
        printf("%d\n", t[j]);
        j++;
    }
    free(t);
}*/
