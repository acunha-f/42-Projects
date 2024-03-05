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
	char	*line;

	if (BUFFER_SIZE <= 0 || read(fd, buffer, BUFFER_SIZE) < 0)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return (NULL);
	}
	line = NULL;
	while (!(read(fd, buffer, BUFFER_SIZE) < 0) && !ft_strchr(buffer, '\n'));
	{
		line = ft_strjoin(line, buffer);
		ft_bzero(buffer, BUFFER_SIZE);
	}
	if (line == NULL && buffer)
		line = ft_strjoin(line, buffer);
	return (line);
}
