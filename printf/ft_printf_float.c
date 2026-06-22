/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 12:21:35 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/22 15:53:50 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int fd, int n)
{
	int		count;
	char	*s;

	s = "0123456789";
	count = 0;
	if (n > 10)
		count += put_nbr(fd, n / 10);
	count += ft_printf_character(fd, s[n % 10]);
	return (count);
}

int	ft_printf_float(int fd, double f)
{
	int			count;
	long long	temp;
	long long	dec_int;
	double		dec;

	count = 0;
	if (f < 0)
	{
		f = -f;
		count += write(fd, "-", 1);
	}
	temp = (long long)f;
	count += put_nbr(fd, temp);
	count += write(fd, ".", 1);
	dec = f - (double)temp;
	dec_int = (long long)((dec * 100.0) + 0.5);
	if (dec_int < 10)
		count += write(fd, "0", 1);
	count += put_nbr(fd, dec_int);
	return (count);
}
