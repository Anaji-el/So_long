/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:13:09 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 04:14:33 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int				ft_printf(const char *s, ...);
void			ft_putstr(char *s, int *count);
void			ft_putchar(char n, int *count);
void			ft_putnm(int n, int *count);
void			ft_unsdeci(unsigned int n, int *count);
void			ft_xdecimal(unsigned int n, int *count);
void			ft_xldecimal(unsigned int n, int *count);
void			ft_checker(char s, va_list list, int *count);
void			ft_putptr(unsigned long n, int *count);

#endif