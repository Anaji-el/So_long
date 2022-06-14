/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 02:36:16 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/13 00:14:07 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_right(t_data *v)
{
	if (v->m[v->i][v->j + 1] != '1' && v->m[v->i][v->j + 1] != 'E')
	{
		v->m[v->i][v->j] = '0';
		v->m[v->i][v->j + 1] = 'P';
		v->num++;
		ft_printf("%d\n", v->num);
	}
	else if (v->m[v->i][v->j + 1] == 'E' && count_c(v) == 0)
		ft_exit(v, "You win\n");
	if (count_c(v) == 0)
		v->close = mlx_xpm_file_to_image(v->mlx, \
			"xmp/door_open.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_left(t_data *v)
{	
	if (v->m[v->i][v->j - 1] != '1' && v->m[v->i][v->j - 1] != 'E')
	{
		v->m[v->i][v->j] = '0';
		v->m[v->i][v->j - 1] = 'P';
		v->num++;
		ft_printf("%d\n", v->num);
	}
	else if (v->m[v->i][v->j - 1] == 'E' && count_c(v) == 0)
		ft_exit(v, "You win\n");
	if (count_c(v) == 0)
		v->close = mlx_xpm_file_to_image(v->mlx, \
			"xmp/door_open.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_up(t_data *v)
{	
	if (v->m[v->i - 1][v->j] != '1' && v->m[v->i - 1][v->j] != 'E')
	{
		v->m[v->i][v->j] = '0';
		v->m[v->i - 1][v->j] = 'P';
		v->num++;
		ft_printf("%d\n", v->num);
	}
	else if (v->m[v->i - 1][v->j] == 'E' && count_c(v) == 0)
		ft_exit(v, "You win\n");
	if (count_c(v) == 0)
		v->close = mlx_xpm_file_to_image(v->mlx, \
			"xmp/door_open.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_down(t_data *v)
{	
	if (v->m[v->i + 1][v->j] != '1' && v->m[v->i + 1][v->j] != 'E')
	{
		v->m[v->i][v->j] = '0';
		v->m[v->i + 1][v->j] = 'P';
		v->num++;
		ft_printf("%d\n", v->num);
	}
	else if (v->m[v->i + 1][v->j] == 'E' && count_c(v) == 0)
		ft_exit(v, "You win\n");
	if (count_c(v) == 0)
		v->close = mlx_xpm_file_to_image(v->mlx, \
			"xmp/door_open.xpm", &v->width, &v->height);
	mlx_print(v);
}
