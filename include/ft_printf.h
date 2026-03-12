/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <parenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:01:15 by parenas-          #+#    #+#             */
/*   Updated: 2026/01/26 16:01:50 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(const int c);
int	ft_putstr(const char *str);
int	ft_putnum(int n);
int	ft_putunsigned(unsigned int n);
int	ft_puthex(unsigned long hex, int capitalize);
int	ft_putpointer(void *ptr);

#endif
