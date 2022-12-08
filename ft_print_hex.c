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

void	ft_print_hex_low(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hex_low(n / 16);
		ft_print_hex_low(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

void	ft_print_hex_up(int n)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n > 16)
	{
		ft_print_hex_up(n / 16);
		ft_print_hex_up(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

void	ft_print_hex(unsigned long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hex_low(n / 16);
		ft_print_hex_low(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

unsigned int ft_print_hexadecimal(char c, va_list args)
{
	unsigned int	n;
	size_t			len;
	
	if (args == 0)
		return (0);
	n = va_arg(args, unsigned long);
	len = ft_count_digits(n);
	if (c == 'x')
		ft_print_hex_low(n);
	if (c == 'X')
		ft_print_hex_up(n);
	return(len);
}
