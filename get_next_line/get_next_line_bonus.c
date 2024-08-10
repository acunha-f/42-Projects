/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:02:03 by marvin            #+#    #+#             */
/*   Updated: 2024/03/30 18:40:08 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			b;

	b = 1;
	if (BUFFER_SIZE <= 0 || fd >= FOPEN_MAX || read(fd, 0, 0) < 0)
	{
		if (fd > 0 && fd < FOPEN_MAX && read(fd, 0, 0) >= 0)
			ft_bzero(buffer[fd], BUFFER_SIZE);
		return (NULL);
	}
	line = NULL;
	while (b > 0 && (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0))
	{
		line = ft_strjoin(line, buffer[fd]);
		if (!line)
			return (NULL);
		b = ft_reset(buffer[fd]);
	}
	return (line);
}

// int	main(int ac, char **av)
// {
// 	int		fd[ac - 1];
// 	int		i;
// 	int		j;
// 	char	*line;

// 	i = 0;
// 	j = 1;
// 	line = NULL;
// 	if (ac < 2)
// 		return (0);
// 	while (i < ac - 1)
// 	{
// 		fd[i++] = open(av[j++], O_RDONLY);
// 	}
// 	i = 0;
// 	while (i < (ac - 1))
// 	{
// 		line = get_next_line(fd[i++]);
// 		if (line)
// 			printf("line: %s", line);
// 		free(line);
// 		if (i == (ac - 1))
// 		{
// 			if (!line)
// 				break ;
// 			i = 0;
// 		}
// 	}
// 	while (i != 0)
// 		close(fd[i--]);
// 	return (0);
// }
