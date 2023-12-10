/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:08 by marvin            #+#    #+#             */
/*   Updated: 2023/12/10 19:04:32 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_lenght(long int nbr)
{
	int	l;

	l = 0;
	if (nbr <= 0)
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

static char	*ft_intmin(char *s)
{
	char	*min;
	int		i;

	i = 0;
	min = "-2147483648";
	while (min[i])
	{
		s[i] = min[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	*ft_aux(long int n, char *str, int lenght)
{
	int	i;
	int	res;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	str[lenght] = '\0';
	while (lenght > i)
	{
		lenght--;
		res = n % 10 + 48;
		str[lenght] = res;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		lenght;

	lenght = ft_find_lenght(n);
	i = 0;
	str = malloc(sizeof(char) * lenght + 1);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		ft_intmin(str);
		return (str);
	}
	ft_aux(n, str, lenght);
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
