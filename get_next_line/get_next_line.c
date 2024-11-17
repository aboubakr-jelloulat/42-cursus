/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:08:05 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/16 13:16:04 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_block_data(int fd, char *buffer, char *s_data)
{
	int		read_bytes;
	char	*temp;
	char	*new_pos;

	read_bytes = 1;
	new_pos = ft_strchr(s_data, '\n');
	while (read_bytes > 0 && new_pos == NULL)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		buffer[read_bytes] = '\0';
		temp = s_data;
		s_data = ft_strjoin (s_data, buffer);
		free (temp);
		new_pos = ft_strchr(s_data, '\n');
	}
	if (read_bytes == -1 || (read_bytes <= 0 && s_data && *s_data == '\0'))
	{
		return (free (s_data), s_data = NULL, NULL);
	}
	return (s_data);
}

static char	*extract_line_from_block(char	**s_data, int i)
{
	char	*line;
	char	*temp;

	while ((*s_data)[i] != '\n' && (*s_data)[i] != '\0')
		i++;
	if ((*s_data)[i] == '\n')
	{
		line = ft_substr (*s_data, 0, i + 1);
		temp = *s_data;
		*s_data = ft_strdup(*s_data + i + 1);
		free (temp);
		if (*s_data[0] == '\0')
		{
			free (*s_data);
			*s_data = NULL;
		}
	}
	else
	{
		line = ft_strdup(*s_data);
		free (*s_data);
		*s_data = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*s_data;
	char		*buffer;
	char		*full_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (!s_data)
		s_data = ft_strdup ("");
	s_data = read_block_data(fd, buffer, s_data);
	free (buffer); 
	if (!s_data)
		return (NULL);
	full_line = extract_line_from_block(&s_data, 0);
	if (!full_line)
	{
		free (s_data);
		s_data = NULL;
	}
	return (full_line);
}
