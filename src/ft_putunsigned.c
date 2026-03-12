/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <parenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:54:48 by parenas-          #+#    #+#             */
/*   Updated: 2026/01/26 16:01:38 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_len(unsigned int n);

int	ft_putunsigned(unsigned int n)
{
	unsigned int	num;
	int				len;

	num = n;
	len = ft_len(n);
	if (num > 9)
	{
		ft_putunsigned(num / 10);
		ft_putunsigned(num % 10);
	}
	if (num <= 9)
		ft_putchar(num + '0');
	return (len);
}

static int	ft_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
