/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:00:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 19:36:19 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checktrim(char const s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_nullmalloc(int i)
{
	char	*trimmed;

	trimmed = malloc(sizeof(char) * 1);
	if (trimmed == NULL)
		return (NULL);
	trimmed[i] = '\0';
	return (trimmed);
}

static char	*ft_actualtrim(char const *s1, char const *set, int start, int end)
{
	char	*trimmed;
	int		i;

	i = 0;
	while (ft_checktrim((char)s1[start], set))
		start++;
	if (s1[start] == '\0')
	{
		trimmed = ft_nullmalloc(i);
		return (trimmed);
	}
	while (ft_checktrim((char)s1[end], set))
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 2));
	if (trimmed == NULL)
		return (NULL);
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	trimmed = ft_actualtrim(s1, set, start, end);
	return (trimmed);
}
/*
int	main(void)
{
	char	*p;

	p = ft_strtrim("aaaactualwordsaaa", "aaa");
	printf("%s\n", p);
	free(p);
} */
