/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:19:11 by acunha-f          #+#    #+#             */
/*   Updated: 2023/10/23 21:34:19 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    unsigned char   *res;

    res = (unsigned char *)ft_memchr("abcdef", 'c', 2);
    printf("%s\n", res);
} not finished */
