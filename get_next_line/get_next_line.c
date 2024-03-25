/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:28:56 by marvin            #+#    #+#             */
/*   Updated: 2024/03/25 20:47:16 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			flag;

	flag = 1;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
	{
		ft_bzero(buffer, BUFFER_SIZE);
		return (NULL);
	}
	line = NULL;
	while (flag > 0 && (buffer[0] || read(fd, buffer, BUFFER_SIZE) > 0))
	{
		line = ft_strjoin(line, buffer);
		flag = ft_reset(buffer);
		if (!line)
			return (NULL);
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
// 	if(line != NULL)
// 	{
// 		while(line != NULL)
// 		{
// 			printf("line[%i]: %s", i++, line);
// 			if(line != NULL)
// 				free(line);
// 			line = get_next_line(fd);
// 		}
// 	}
// 	close(fd);
// }
