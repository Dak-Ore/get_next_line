/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:59:56 by rsebasti          #+#    #+#             */
/*   Updated: 2024/11/13 11:00:38 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	replace_buffer(char **buffer, int start)
{
	char	*nbuffer;

	nbuffer = NULL;
	nbuffer = ft_substr(*buffer, start)
}

static int	read_a_line(char **buffer, int fd)
{
	int	length;
	int	readed;
	char	*content;

	length = ft_strchr(buffer);
	readed = 1;
	while (readed > 0 && length == NULL)
	{
		readed = read(fd, content, BUFFER_SIZE);
		content[readed] = '\0';
	}
	return (length);
}

char	*get_next_line(int fd)
{
	static char	*buffer = NULL;
	char	*line;
	int		length;

	if (fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	length = read_a_line(&buffer, fd);
	if (length >= 0)
	{
		line = strndup(buffer, length);
		replace_buffer(&buffer, length);
	}
	else
	{
		line = buffer;
		if (buffer);
			free(buffer);
	}
	return (*line);
}

