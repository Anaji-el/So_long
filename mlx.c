/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:22:39 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/13 00:10:50 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"

int	count_mp(char **m)
{
	int	i;

	i = 0;
	while (m[i])
		i++;
	return (i);
}

void	mlx_print(t_data *v)
{
	v->i = 0;
	while (v->m[v->i])
	{
		v->j = 0;
		while (v->m[v->i][v->j])
		{
			if (v->m[v->i][v->j] == '1')
				mlx_put_image_to_window(v->mlx, v->mlx_win, \
					v->wall, v->j * v->width, v->i * v-> height);
			else if (v->m[v->i][v->j] == '0')
				mlx_put_image_to_window(v->mlx, v->mlx_win, \
					v->back, v->j * v->width, v->i * v->height);
			else if (v->m[v->i][v->j] == 'C')
				mlx_put_image_to_window(v->mlx, v->mlx_win, \
					v->collect, v->j * v->width, v->i * v->height);
			else if (v->m[v->i][v->j] == 'P')
				mlx_put_image_to_window(v->mlx, v->mlx_win, \
					v->player, v->j * v->width, v->i * v->height);
			else if (v->m[v->i][v->j] == 'E')
				mlx_put_image_to_window(v->mlx, v->mlx_win, \
					v->close, v->j * v->width, v->i * v->height);
		v->j++;
		}
	v->i++;
	}
}

void	mlx(char	**m)
{
	t_data	v;

	v.len = (int)ft_strlen(m[0]);
	v.mlx = mlx_init();
	v.mlx_win = mlx_new_window(v.mlx, v.len * 60, count_mp(m) * 60, "so_long");
	v.wall = mlx_xpm_file_to_image(v.mlx, "xmp/wall.xpm", &v.width, &v.height);
	v.back = mlx_xpm_file_to_image(v.mlx, "xmp/back.xpm", &v.width, &v.height);
	v.player = mlx_xpm_file_to_image(v.mlx, "xmp/player.xpm", \
		&v.width, &v.height);
	v.collect = mlx_xpm_file_to_image(v.mlx, "xmp/collect.xpm", \
		&v.width, &v.height);
	v.close = mlx_xpm_file_to_image(v.mlx, "xmp/door_closed.xpm", \
		&v.width, &v.height);
	v.m = m;
	v.count = 0;
	v.num = 0;
	mlx_hook(v.mlx_win, 2, 0, player_move, &v);
	mlx_hook(v.mlx_win, 17, 0, ft_exit, &v);
	mlx_print(&v);
	mlx_loop(v.mlx);
}
