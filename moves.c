/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 04:38:25 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/13 00:11:58 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	return_i(t_data *v)
{
	v->i = 0;
	while (v->m[v->i])
	{
		v->j = 0;
		while (v->m[v->i][v->j])
		{
			if (v->m[v->i][v->j] == 'P')
				return (v->i);
			v->j++;
		}
		v->i++;
	}
	return (0);
}

int	return_j(t_data *v)
{
	v->i = 0;
	while (v->m[v->i])
	{
		v->j = 0;
		while (v->m[v->i][v->j])
		{
			if (v->m[v->i][v->j] == 'P')
				return (v->j);
			v->j++;
		}
		v->i++;
	}
	return (0);
}

int	count_c(t_data *v)
{
	v->i = 0;
	v->coll = 0;
	while (v->m[v->i])
	{
		v->j = 0;
		while (v->m[v->i][v->j])
		{
			if (v->m[v->i][v->j] == 'C')
				v->coll++;
			v->j++;
		}
		v->i++;
	}
	return (v->coll);
}

int	player_move(int key, void *param)
{
	t_data	*v;

	v = (t_data *)param;
	v->i = return_i(v);
	v->j = return_j(v);
	if (key == W)
		move_up(v);
	else if (key == A)
		move_left(v);
	else if (key == S)
		move_down(v);
	else if (key == D)
		move_right(v);
	else if (key == ESC)
		you_left(v);
	return (0);
}
