/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:57:54 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/12 23:43:38 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "get_next_line/get_next_line.h"

int	check_rect(char **m)
{
	t_data	data;

	data.width = ft_strlen(m[0]);
	data.i = 0;
	while (m[data.i])
	{
		if (data.width != ft_strlen(m[data.i]))
			return (0);
		data.i++;
	}
	return (1);
}

int	check_f(char **m)
{
	int	i;

	i = 0;
	while (m[0][i])
	{
		if (m[0][i] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	check_l(char **m)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (m[i])
		i++;
	while (m[i - 1][j])
	{
		if (m[i - 1][j] != '1')
			return (0);
		j++;
	}
	return (1);
}

int	check_fl(char **m)
{
	int	i;

	i = 0;
	while (m[i])
	{
		if (m[i][0] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	check_ll(char **m)
{
	int	i;

	i = 0;
	while (m[i])
	{
		if (m[i][ft_strlen(m[i]) - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}
