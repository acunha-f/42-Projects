/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:28:26 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 22:24:51 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		j;

	j = 0;
	while (s2[j] && s2[j] != chr)
		j++;
	fstr[p] = malloc(sizeof(char) * j);
	if (!fstr[p])
	{
		while (p > 0)
		{
			free(fstr[p]);
			p--;
		}
		return (-1);
	}
	return (j);
}

static char **ft_actualsplit(char *s, char chr, char **fstr)
{
	int		i;
	int		p;
	int		j;
	int		k;
	int		res;

	i = 0;
	j = 0;
	p = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == chr && s[i])
			i++;
		j = i;
		res = ft_lenghtwrds(s + i, chr, fstr, p);
		if (res < 0)
			return (fstr);
		i += res;
		p++;
		while (j < i)
			fstr[p][k++] = s[j++];
		fstr[p][k] = '\0';
	}
	return (fstr);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		size1;

	i = 0;
	size1 = ft_countwrds(s, c);
	if (!s)
		return (NULL);
	str = malloc(size1 * sizeof(char) + 1);
	if (!str)
		return(NULL);
	if (&ft_actualsplit == NULL)
	{
		free(str);
		return (NULL);
	}
	return (str);
}
/*
int	main(void)
{
	char	**bo;

	bo = ft_split("   abel miguel rafael ", ' ');
	free(bo);
} */
