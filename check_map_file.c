/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:20:52 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/30 15:59:28 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_map_file(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	if (str[i] == '\0')
	{
		i--;
		if (str[i] == 'r')
			i--;
		else 
			return (-1);
		if (str[i] == 'e')
			i--;
		else 
			return (-1);
		if (str[i] == 'b')
			i--;
		else 
			return (-1);
		if (str[i] == '.')
			i--;
		else 
			return (-1);
	}
	write(1,"\n", 1);
	return (0);
}
int main(int argc, char **argv)
{
	if (check_map_file(argv[1]) == -1)
		printf("ERROR");
	return 0;
}
