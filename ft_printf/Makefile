# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 07:50:13 by anaji-el          #+#    #+#              #
#    Updated: 2021/12/18 03:51:32 by anaji-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_unsdeci.c \
		ft_xdecimal.c \
		ft_xldecimal.c \
		ft_putptr.c \
		ft_putnm.c \
		ft_checker.c

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

OBJECTS = $(SRC:.c=.o)

all : $(NAME)
$(NAME) : $(OBJECTS) ft_printf.h
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
