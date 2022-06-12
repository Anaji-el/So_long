/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_m.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:55:56 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/12 23:15:11 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "get_next_line/get_next_line.h"
#include "so_long.h"

int	count_m(int fd)
{
	int		len;
	char	*str;

	len = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		len++;
	}
	close(fd);
	return (len);
}
