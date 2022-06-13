/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:19:56 by anaji-el          #+#    #+#             */
/*   Updated: 2021/12/18 04:06:08 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnm(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', count);
			nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnm(nb / 10, count);
		ft_putnm(nb % 10, count);
	}
	else
	{
		ft_putchar(nb + 48, count);
	}
}
// int main()
// {
// 	int count;
// 	count = 0;
// 	ft_putnm(-2147483648, &count);
// 	printf("\n%d",count);
// }
