/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:28:56 by marvin            #+#    #+#             */
/*   Updated: 2024/03/04 19:28:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			b;

	b = 1;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return (NULL);
	}
	line = NULL;
	while (b > 0 && !ft_strchr(buffer, '\n'))
	{
		b = read(fd, buffer, BUFFER_SIZE);
		buffer[b++] = '\0';
		line = ft_strjoin(line, buffer);
		ft_bzero(buffer, BUFFER_SIZE);
	}
	if (line == NULL && buffer[0] != '\0')
		line = ft_strjoin(line, buffer);
	ft_bzero(buffer, BUFFER_SIZE);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open("example.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("line[%i]: %s\n", i++, line);
		line = get_next_line(fd);
	}
}
*/
