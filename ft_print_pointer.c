/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:40:58 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/05 21:40:59 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_print_pointer(va_list args)
{
	unsigned long	n;
	size_t			len;

	n = va_arg(args, unsigned long);
	len = 2 + ft_count_digits_pointer(n);
	ft_putstr_fd("0x", 1);
	ft_print_hex_pointer(n);
	return (len);
}
