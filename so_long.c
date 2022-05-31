/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:47:23 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/31 16:51:06 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char  **argv)
{
	t_data v;
	if (argc != 2)
	{
		printf("ERROR");
	}
	v.fd = open(argv[1], O_RDONLY);
	if (v.fd < 0)
		printf("ERROR");
	if (check_map_file(argv[1]) == -1)
		printf("ERROR");
	fill_m(argv,v);
	
	return (0);
}
