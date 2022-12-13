/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:09:33 by laura             #+#    #+#             */
/*   Updated: 2022/12/07 12:09:52 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hex_pointer(unsigned long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 15)
	{
		ft_print_hex_pointer(n / 16);
		ft_print_hex_pointer(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

void	ft_print_hex(char c, unsigned int n)
{
	char	*hex_up;
	char	*hex_low;

	hex_low = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_print_hex(c, n / 16);
		ft_print_hex(c, n % 16);
	}
	else
	{
		if (c == 'x')
			write(1, &hex_low[n], 1);
		if (c == 'X')
			write(1, &hex_up[n], 1);
	}
}

unsigned int	ft_print_hexadecimal(char c, va_list args)
{
	unsigned int	n;
	size_t			len;

	if (args == 0)
		return (0);
	n = va_arg(args, unsigned int);
	len = ft_count_digits_hex(n);
	ft_print_hex(c, n);
	return (len);
}

size_t	ft_count_digits_hex(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n /= 16;
		digits++;
	}
	return (digits);
}

size_t	ft_count_digits_pointer(unsigned long n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n /= 16;
		digits++;
	}
	return (digits);
}
