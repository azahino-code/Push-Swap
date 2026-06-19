/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:33:17 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/19 12:56:06 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(int fd, const char *format, ...);
int	ft_printf_decimal(int fd, int n);
int	ft_printf_unsigned_decimal(int fd, unsigned int n);
int	ft_printf_hex(int fd, unsigned int i, int mayus);
int	ft_printf_pointer(int fd, size_t p);

#endif