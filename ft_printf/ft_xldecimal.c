/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_XLdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:13:29 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 03:57:45 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xldecimal(unsigned int n, int *count)
{
	char	*c;

	c = ("0123456789ABCDEF");
	if (n < 16)
	{
		ft_putchar(c[n], count);
	}
	else
	{
		ft_xldecimal(n / 16, count);
		ft_xldecimal(n % 16, count);
	}
}
