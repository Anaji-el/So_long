/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:36:02 by anaji-el          #+#    #+#             */
/*   Updated: 2022/02/23 18:44:19 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_check(char *sv)
{
	char	*try;
	int		l;
	int		count;

	count = 0;
	while (sv[count] && sv[count] != '\n')
		count++;
	if (sv[count] == '\n')
		count++;
	try = (char *)malloc((count + 1) * sizeof(char));
	if (!try)
		return (NULL);
	l = 0;
	while (l < count)
	{
		try[l] = sv[l];
		l++;
	}
	try[l] = '\0';
	if (try [0] == '\0')
		return (NULL);
	return (try);
}

char	*ft_rest(char *rst)
{
	char	*op;
	int		p;
	int		count;
	int		len;

	p = 0;
	count = 0;
	while (rst[count] != '\n' && rst[count] != '\0')
		count++;
	if (rst[count] == '\n')
		count++;
	len = ft_strlen(rst) - count;
	op = (char *)malloc ((len + 1) * sizeof(char));
	if (!op)
		return (0);
	while (rst[count])
		op[p++] = rst[count++];
	op[p] = '\0';
	free(rst);
	if (op[0] == '\0')
	{
		free(op);
		return (NULL);
	}
	return (op);
}

char	*readl(char *save, int fd)
{
	int		i;
	char	*buff;

	i = 1;
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (i != 0 && ft_strsh(save) == 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = '\0';
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		if (i == 0)
			break ;
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save = readl(save, fd);
	if (!save)
		return (NULL);
	line = ft_check(save);
	save = ft_rest(save);
	return (line);
}
