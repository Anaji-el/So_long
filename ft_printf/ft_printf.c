/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 07:20:42 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 03:45:36 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	ap;

	count = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_checker(s[i], ap, &count);
			if (count == -1)
				return (-1);
		}
		else
		{
			ft_putchar(s[i], &count);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
