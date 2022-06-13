/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 06:52:30 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 04:11:34 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hexa(unsigned long n, int *count)
{
	char	*c;

	c = ("0123456789abcdef");
	if (n < 16)
	{
		ft_putchar(c[n], count);
	}
	else
	{
		hexa(n / 16, count);
		hexa(n % 16, count);
	}
}

void	ft_putptr(unsigned long n, int *count)
{
	hexa(n, count);
}
