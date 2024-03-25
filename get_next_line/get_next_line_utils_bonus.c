/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:58:23 by marvin            #+#    #+#             */
/*   Updated: 2024/03/25 19:14:22 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_bzero(char *str, size_t n)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (i < n)
		str[i++] = '\0';
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (free(s1), NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		if (s2[j++] == '\n')
			break ;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}

int	ft_reset(char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (b[i])
	{
		if (b[i] == '\n')
		{
			while (b[i])
			{
				b[i++] = 0;
				b[j++] = b[i];
			}
			return (0);
		}
		b[i++] = 0;
	}
	return (1);
}
