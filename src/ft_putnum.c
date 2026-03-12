/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <parenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:47:25 by parenas-          #+#    #+#             */
/*   Updated: 2026/01/23 15:57:05 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_putnum(int n)
{
	long	num;
	int		len;

	num = n;
	len = ft_len(n);
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	if (num >= 0 && num <= 9)
		ft_putchar(num + '0');
	return (len);
}
