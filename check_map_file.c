/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:20:52 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/30 18:56:30 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_map_file(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i] == '\0')
	{
		i--;
		if (str[i] == 'r')
			i--;
		if (str[i] == 'e')
			i--;
		if (str[i] == 'b')
			i--;
		if (str[i] == '.')
			i--;
		else
			return (-1);
	}
	write(1, "\n", 1);
	return (0);
}

