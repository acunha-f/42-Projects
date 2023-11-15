/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:08 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 17:58:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_lenght(int nbr)
{
	int	l;

	l = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		l++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		res;
	int		lenght;

	lenght = find_lenght(n);
	i = 0;
	str = malloc(sizeof(char) * lenght + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	while (lenght > i)
	{
		lenght--;
		res = n % 10 + 48;
		str[lenght] = res;
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	char	*yo;

	yo = ft_itoa(1234);
	printf("%s\n", yo);
	free(yo);
} */
