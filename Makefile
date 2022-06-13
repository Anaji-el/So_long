NAME = so_long
CC = cc
FLAGS = -Wall -Wextra -Werror -Imlx
RM = rm -rf

PRINTF = ft_printf/libftprintf.a

FILES = ft_check.c fill_m.c check_II.c count_m.c \
	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c check_map_file.c mlx.c so_long.c\
	free.c moves.c player_moves.c

OBJ = $(FILES:.c=.o)

all: ${NAME}

${NAME}: ${OBJ} ${PRINTF} so_long.h
	${CC} ${FLAGS} ${OBJ} ${PRINTF} -lmlx -framework OpenGL -framework AppKit -o ${NAME}

${PRINTF} :
	@make -C ft_printf

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}
	@make -C ft_printf clean 

fclean: clean
	${RM} ${NAME}
	@make -C ft_printf fclean 
re: fclean all
