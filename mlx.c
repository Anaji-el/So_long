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
<<<<<<< HEAD
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
=======
#include <mlx.h>

void    mlx(t_data *data)
{

	void	*mlx;
	void	*win;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 400, "Window - Create Image");
	mlx_loop(mlx);
}
>>>>>>> 79c1706237ac8eba1fe7df5ee86f787afb3c7ed0
