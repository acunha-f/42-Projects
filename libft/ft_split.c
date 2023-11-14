/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:28:26 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 19:28:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	countwrds(char *s1, char chr)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	if (s1 == NULL)
		return (0);
	while (s1[j])
	{
		while (s1[j] == chr)
			j++;
		if (s1[j - 1] == chr && s1[j] != '\0')
			count++;
		j++;
	}
	return (count);
}

static int	lenghtwrds(char *s2, char chr1, int *v)
{
	int	lenght;

	lenght = 0;
	while (s2[v] == chr1)
		*v++;
	while (s2[v] && s2[v] != chr1)
	{
		*v++;
		lenght++;
	}
	return (lenght);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	char	*temp;
	int		l;
	int		ll;
	int		i;

	i = 0;
	ll = 0;
	temp = s;
	l = countwrds(s, c);
	str = malloc(sizeof(char*) * l);
	while (i < l && temp)
	{
		str[i] = malloc(sizeof(char) * lenghtwrds(temp[ll], c, ll) + 1);
		ll++;
		i++;
	}
	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str
	}
	return (str);
}

int	main(void)
{
	char	**bo;

	bo = ft_split("   abel miguel rafael ", ' ');
	free(bo);
}
