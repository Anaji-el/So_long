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

int	ft_exit(t_data *v, char *msg)
{
	write(1, msg, ft_strlen(msg));
	ft_free(v);
	exit(0);
}

void	ft_free(t_data	*v)
{
	int	i;

	if (v->collect)
		mlx_destroy_image(v->mlx, v->collect);
	if (v->back)
		mlx_destroy_image(v->mlx, v->back);
	if (v->close)
		mlx_destroy_image(v->mlx, v->close);
	if (v->player)
		mlx_destroy_image(v->mlx, v->player);
	if (v->wall)
		mlx_destroy_image(v->mlx, v->wall);
	i = 0;
	while (v->m[i])
	{
		free(v->m[i]);
		i++;
	}
	free (v->m);
}
