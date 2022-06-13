/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:47:23 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/13 00:22:42 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	v;

	if (argc != 2)
		return (put_error(), 0);
	v.fd = open(argv[1], O_RDONLY);
	if (check_map_file(argv[1]) == -1)
		return (put_error(), 1);
	if (v.fd < 0)
		return (put_error(), 1);
	v.m = fill_m(argv, v);
	if (!check_rect(v.m) || !check_f(v.m) || !check_l(v.m) \
		|| !check_ll(v.m) || !check_rr(v.m) || !component(v.m))
		return (put_error(), 1);
	mlx(v.m);
}
