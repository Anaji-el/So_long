/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 04:48:12 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/12 23:20:17 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(t_data	*v)
{
	write(1, "you quit!\n", 11);
	ft_free(v);
	exit(0);
}

int	you_win(t_data	*v)
{
	write(1, "you win!\n", 10);
	ft_free(v);
	exit(0);
}

int	you_left(t_data	*v)
{
	write(1, "you left!\n", 11);
	ft_free(v);
	exit(0);
}

void	ft_free(t_data	*v)
{
	int	i;

	mlx_destroy_image(v->mlx, v->collect);
	mlx_destroy_image(v->mlx, v->back);
	mlx_destroy_image(v->mlx, v->open);
	mlx_destroy_image(v->mlx, v->close);
	mlx_destroy_image(v->mlx, v->player);
	mlx_destroy_image(v->mlx, v->wall);
	i = 0;
	while (v->m[i])
	{
		free(v->m[i]);
		i++;
	}
	free (v->m);
}
