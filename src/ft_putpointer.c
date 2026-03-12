/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <parenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:24:12 by parenas-          #+#    #+#             */
/*   Updated: 2026/01/26 16:02:11 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				len;
	unsigned long	ptro;

	if (!ptr)
		return (ft_putstr("(nil)"));
	len = 0;
	ptro = (unsigned long)ptr;
	len += ft_putstr("0x");
	len += ft_puthex(ptro, 0);
	return (len);
}
