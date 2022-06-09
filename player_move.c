/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 04:38:25 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/09 04:44:40 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long"

int	coin_count(t_data	*v)
{
	v->count = 0;
	v->i = 0;
	while (v->m[v->i])
	{
		v->j = 0;
		while (v->m[v->i][v->j])
		{
			if (v->m[v->i][v->j] == 'C')
				v->count++;
			v->j++;
		}
		v->i++;
	}
	return (v->count);
}

void	move_right(t_data *v)
{
	if (v->m[v->x][v->y + 1] != '1' && v->m[v->x][v->y + 1] != 'E')
	{
		v->m[v->x][v->y] = '0';
		v->m[v->x][v->y + 1] = 'P';
		v->num++;
		printf("%d\n", v->num);
	}
	else if (v->m[v->x][v->y + 1] == 'E' && coin_count(v) == 0)
		you_win(v);
	if (coin_count(v) == 0)
		v->exit = mlx_xpm_file_to_image(v->mlx, \
			"img/exit1.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_left(t_data *v)
{	
	if (v->m[v->x][v->y - 1] != '1' && v->m[v->x][v->y - 1] != 'E')
	{
		v->m[v->x][v->y] = '0';
		v->m[v->x][v->y - 1] = 'P';
		v->num++;
		printf("%d\n", v->num);
	}
	else if (v->m[v->x][v->y - 1] == 'E' && coin_count(v) == 0)
		you_win(v);
	if (coin_count(v) == 0)
		v->exit = mlx_xpm_file_to_image(v->mlx, \
			"img/exit1.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_up(t_data *v)
{	
	if (v->m[v->x - 1][v->y] != '1' && v->m[v->x - 1][v->y] != 'E')
	{
		v->m[v->x][v->y] = '0';
		v->m[v->x - 1][v->y] = 'P';
		v->num++;
		printf("%d\n", v->num);
	}
	else if (v->m[v->x - 1][v->y] == 'E' && coin_count(v) == 0)
		you_win(v);
	if (coin_count(v) == 0)
		v->exit = mlx_xpm_file_to_image(v->mlx, \
			"img/exit1.xpm", &v->width, &v->height);
	mlx_print(v);
}

void	move_down(t_data *v)
{	
	if (v->m[v->x + 1][v->y] != '1' && v->m[v->x + 1][v->y] != 'E')
	{
		v->m[v->x][v->y] = '0';
		v->m[v->x + 1][v->y] = 'P';
		v->num++;
		printf("%d\n", v->num);
	}
	else if (v->m[v->x + 1][v->y] == 'E' && coin_count(v) == 0)
		you_win(v);
	if (coin_count(v) == 0)
		v->exit = mlx_xpm_file_to_image(v->mlx, \
			"img/exit1.xpm", &v->width, &v->height);
	mlx_print(v);
}
