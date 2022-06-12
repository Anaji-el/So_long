/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_II.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:18:33 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/12 22:50:52 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_rr(char **m)
{
	int	i;
	int	j;

	i = 0;
	while (m[i])
	{
		j = 0;
		while (m[i][j])
		{
			if (m[i][j] != '0'
				&& m[i][j] != 'P'
				&& m[i][j] != 'E'
				&& m[i][j] != 'C'
				&& m[i][j] != '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	component(char	**m)
{
	t_data	v;

	v.i = 0;
	v.c = 0;
	v.e = 0;
	v.p = 0;
	while (m[v.i])
	{
		v.j = 0;
		while (m[v.i][v.j])
		{
			if (m[v.i][v.j] == 'C')
				v.c++;
			if (m[v.i][v.j] == 'P')
				v.p++;
			if (m[v.i][v.j] == 'E')
				v.e++;
			v.j++;
		}
		v.i++;
	}
	if (v.c > 0 && v.e > 0 && v.p == 1)
		return (1);
	return (0);
}
