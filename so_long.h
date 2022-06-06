/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:10 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/05 20:42:31 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <fcntl.h>
# include <mlx.h>

typedef struct data
{
	int i;
	int j;
	int		fd;
	int		count;
	char	**m;
	char	*tmp;
	int		wi;
	int		hei;
	int	c;
	int	e;
	int	p;
}t_data;

int	check_map_file(char *str);
int	count_m(int fd);
char **fill_m(char **av,t_data v);
char	*ft_substr(char *s, int start, size_t len);
int	check_rect(char **m);
int check_f(char **m);
int check_l(char **m);
int	check_fl(char **m);
int check_rr(char **m);
int check_ll(char **m);
int	component(char	**m);

#endif