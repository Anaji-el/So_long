/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:47:23 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/11 00:10:54 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char  **argv)
{
	if (argc != 2)
	{
		printf("ERROR");
		return (0);
	}
	
	
	t_data v;
	v.fd = open(argv[1], O_RDONLY);
	if (check_map_file(argv[1]) == -1)
		{
		printf("Error");
		exit(1);
		}
	if (v.fd < 0)
		{
		printf("Error");
		exit(1);
		}
	v.m = fill_m(argv,v);
	if (check_rect(v.m) == 0 || check_f(v.m) == 0 || check_l(v.m) == 0 \
		|| check_ll(v.m) == 0 || check_rr(v.m) == 0 || component(v.m) == 0)
		{
		printf("Error");
		exit(1);
		}
	mlx(v.m);
	
}
