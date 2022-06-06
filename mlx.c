/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:22:39 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/06 23:49:50 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"
int	count_mp(char **map)
{
	int i;
	i = 0;
	while(map[i])
		i++;
	return(i);
}
void mlx(t_data *v)
{
	v->mlx_ptr = mlx_init();
	v->wi = ft_strlen(v->m[0]);
	v->hei = count_mp(v->m);
	printf("%d",v->hei);
	v->mlx_win = mlx_new_window(v->mlx_ptr,500, 200, "window");
	mlx_loop(v->mlx_ptr);
}	