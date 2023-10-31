/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:00:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/27 20:00:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_customcpy(char *trimmed1, char const *str, int start1, int end1)
{
	int	i;

	i = 0;
	while (start1 < end1)
	{
		trimmed1[i] = str[start1];
		i++;
		start1++;
	}
	trimmed1[i] = '\0';
	return (trimmed1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		start;
	int		end;
	int		size_of_set;

	i = 0;
	start = 0;
	size_of_set = ft_strlen(set) - 1;
	while (s1 && s1[start] == set[start])
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] == set[size_of_set] && end > start);
	{
		end--;
		size_of_set--;
	}
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_customcpy(trimmed, s1, start, end);
	return (trimmed);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("aaaactualwordsaaa", "aaa"));
}
