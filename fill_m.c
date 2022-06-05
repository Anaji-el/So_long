/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:25:41 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/05 19:26:23 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"

void	trim_nl(char *line, int length)
{
	if (line[length - 1] == '\n')
		line[length - 1] = '\0';
}


char **fill_m(char **av, t_data v)
{
	v.i = -1;
	int fd;
	v.count = count_m(v.fd);
	//printf("%d\n",v.count);
	v.m = (char **)malloc(sizeof(char *) * (v.count + 1));
	if(!v.m)
		return (NULL);
	//v.m[v.i]= "hhh";
	fd  = open(av[1],O_RDONLY);
	while(++v.i < v.count)
	{
		v.m[v.i]= get_next_line(fd);
		trim_nl(v.m[v.i], ft_strlen(v.m[v.i]));
	}
	v.m[v.i] = NULL;
	return(v.m);
}
