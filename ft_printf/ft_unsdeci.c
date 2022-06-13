/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsdeci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:17:42 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 04:15:30 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsdeci(unsigned int n, int *count)
{
	if (n <= 9)
	{
		ft_putchar(n + 48, count);
	}
	else
	{
		ft_unsdeci(n / 10, count);
		ft_unsdeci(n % 10, count);
	}
}
