/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:25:41 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/31 18:40:56 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"

char **fill_m(char **av, t_data v)
{
	v.i = -1;
	int fd;
	v.count = count_m(v.fd);
	printf("%d\n",v.count);
	v.m = malloc (v.count + 1);
	//v.m[v.i]= "hhh";
	fd  = open(av[1],O_RDONLY);
	while(++v.i < v.count)
	{
		v.m[v.i]= get_next_line(fd);
		printf("%s",v.m[v.i]);
	}
	v.m[v.i] = NULL;
	v.i = -1;
	while (++v.i < v.count)
	{
		v.tmp = v.m[v.i];
		v.m[v.i] = ft_substr(v.tmp, 0, ft_strlen(v.tmp) - 1);
		free(v.tmp);
		printf("%s",v.m[v.i]);
	}
	v.m[v.i] = NULL;
	if(!v.m)
		return (NULL);
	return(v.m);
}
