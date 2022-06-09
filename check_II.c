/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_II.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:18:33 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/05 20:55:15 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int check_rr(char **m)
{
	int	i;
	int	j;
	
	i = 0;
	while(m[i])
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
	int	i;
	int	j;
	int	c;
	int	e;
	int	p;
	
	i = 0;
	c = 0;
	e = 0;
	p = 0;
	while (m[i])
	{
		j = 0;
		while (m[i][j])
		{
			if (m[i][j] == 'C')
				c++;
			if (m[i][j] == 'P')
				p++;
			if (m[i][j] == 'E')
				e++;
			j++;
		}
		i++;
	}
	if (c > 0 && e > 0 && p == 1)
		return (1);
	return (0);
}