/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:10 by anaji-el          #+#    #+#             */
/*   Updated: 2022/06/11 00:11:01 by anaji-el         ###   ########.fr       */
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

# define A 0
# define S 1
# define D 2
# define W 13
# define ESC 53


# define WALL '1'
# define EMPTY '0'
# define COL 'C'
# define EXIT 'E'
# define PLAYER 'P'
# define ENEMY 'X'
# define SQUARE 32

typedef struct data
{
	int i;
	int j;
	int		fd;
	int		count;
	char	**m;
	char	*tmp;
	int		width;
	int		height;
	int len;
	int	c;
	int	e;
	int	p;
	void	*mlx;
	void	*mlx_win;
	int	img_width;
	int	img_height;
	int	coll;
	void	*wall;
	void	*open;
	void	*close;
	void	*back;
	void	*player;
	void	*collect;
	int	num;
}t_data;

int	check_map_file(char *str);
int	count_m(int fd);
char **fill_m(char **av,t_data v);
char	*ft_substr(char *s, int start, size_t len);
int	check_rect(char **m);
int check_f(char **m);
int check_l(char **m);
int check_rr(char **m);
int	check_fl(char **m);
int check_ll(char **m);
int	component(char	**m);
void mlx(char **m);
int	return_i(t_data *v);
int	return_j(t_data *v);
int	count_c(t_data *v);
int	you_win(t_data	*v);
int	ft_exit(t_data	*v);
int	you_left(t_data	*v);
void	ft_free(t_data	*v);
void	move_right(t_data *v);
void	move_left(t_data *v);
void	move_up(t_data *v);
void	move_down(t_data *v);
void	mlx_print(t_data *v);
int	player_move(int key, void *param);
#endif