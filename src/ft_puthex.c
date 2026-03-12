/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <parenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:35:13 by parenas-          #+#    #+#             */
/*   Updated: 2026/01/26 16:02:01 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_puthex(unsigned long hex, int capitalize)
{
	int		len;
	char	*base;

	len = 0;
	if (capitalize)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (hex >= 16)
		len += ft_puthex(hex / 16, capitalize);
	len += ft_putchar(base[hex % 16]);
	return (len);
}
