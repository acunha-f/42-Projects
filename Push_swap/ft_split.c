/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:16:43 by marvin            #+#    #+#             */
/*   Updated: 2024/06/11 03:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_countwrds(const char *s, char sep)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[j])
	{
		while (s[j] == sep)
			j++;
		if ((s[j - 1] == sep && s[j] != '\0') || j == 0)
			count++;
		j++;
	}
	return (count);
}

static int	ft_lenghtwrds(char *s2, char chr, char **fstr, int p)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s2[j] && s2[j] != chr)
		j++;
	fstr[p] = malloc(sizeof(char) * j + 1);
	if (!fstr[p])
	{
		while (p >= 0)
		{
			free(fstr[p]);
			p--;
		}
		free(fstr);
		return (-1);
	}
	while (i < j)
	{
		fstr[p][i] = s2[i];
		i++;
	}
	fstr[p][i] = '\0';
	return (j);
}

static char	**ft_actualsplit(char *s, char chr, char **fstr)
{
	int		i;
	int		p;
	int		j;

	i = 0;
	p = 0;
	while (s[i])
	{
		while (s[i] == chr && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		j = ft_lenghtwrds(s + i, chr, fstr, p);
		if (j < 0)
			return (NULL);
		i += j;
		p++;
	}
	fstr[p] = NULL;
	return (fstr);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countwrds(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (ft_actualsplit((char *)s, c, str));
}
