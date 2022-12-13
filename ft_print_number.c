/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:40:55 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/05 21:40:56 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_print_number(va_list args)
{
	size_t	n;
	size_t	len;

	n = va_arg(args, int);
	len = ft_count_digits(n);
	ft_putnbr_fd(n, 1);
	return (len);
}

unsigned int	ft_print_unsigned(va_list args)
{
	size_t	n;
	size_t	len;

	n = va_arg(args, unsigned long);
	len = ft_count_digits_un(n);
	ft_putunsigned_fd(n, 1);
	return (len);
}

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	unsigned long	number;

	number = n;
	if (number > 9)
	{
		ft_putunsigned_fd(number / 10, fd);
		number %= 10;
	}
	ft_putchar_fd(number + '0', fd);
}

size_t	ft_count_digits_un(unsigned int n)
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
		n /= 10;
		digits++;
	}
	return (digits);
}

size_t	ft_count_digits(long n)
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
		n /= 10;
		digits++;
	}
	return (digits);
}
