/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:02:03 by marvin            #+#    #+#             */
/*   Updated: 2024/03/23 17:02:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FDS][BUFFER_SIZE + 1];
	char		*line;
	int			b;

	b = 1;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= FDS || read(fd, 0, 0) < 0)
	{
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

// int	main(void)
// {
// 	int		fd;
// 	int		i;
// 	char	*line;

// 	i = 1;
// 	fd = open("example.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	while (line)
// 	{
// 		printf("line[%i]: %s", i++, line);
// 		line = get_next_line(fd);
// 	}
// 	printf("line[%i]: %s", i++, line);
// 	close(fd);
// }
