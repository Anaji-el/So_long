/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:22:39 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/05 23:23:41 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <mlx.h>

void    mlx(t_data *data)
{

	void	*mlx;
	void	*win;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 400, "Window - Create Image");
	mlx_loop(mlx);
}