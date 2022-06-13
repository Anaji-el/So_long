/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:10:05 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 04:17:01 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checker(char s, va_list list, int *count)
{
	if (s == 'd' || s == 'i')
		ft_putnm(va_arg(list, int), count);
	else if (s == 's')
		ft_putstr(va_arg(list, char *), count);
	else if (s == 'c')
		ft_putchar(va_arg(list, int), count);
	else if (s == 'u')
		ft_unsdeci(va_arg(list, int), count);
	else if (s == 'x')
		ft_xdecimal(va_arg(list, int), count);
	else if (s == 'X')
		ft_xldecimal(va_arg(list, int), count);
	else if (s == 'p')
	{
		ft_putstr("0x", count);
		ft_putptr(va_arg(list, unsigned long), count);
	}
	else if (s == '%')
		ft_putchar('%', count);
	else
		ft_putchar(s, count);
}
