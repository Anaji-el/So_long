# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 19:52:27 by anaji-el          #+#    #+#              #
#    Updated: 2022/06/10 04:03:08 by anaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = so_long

FILES = ft_check.c fill_m.c check_II.c count_m.c \
	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c check_map_file.c mlx.c \
	free.c moves.c player_moves.c
PS = so_long.c
OBJ = $(FILES:.c=.o)

.PHONY: all fclean clean re
all: ${NAME}


${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} ${PS} -lmlx -framework OpenGL -framework AppKit -o ${NAME} 

%.o: %.c so_long.h
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS}
re: fclean all
