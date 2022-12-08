/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:40:49 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/06 23:46:10 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int ft_print_char(va_list args)
{
	if (args == 0)
		return (0);
	ft_putchar_fd((unsigned char) va_arg(args, int), 1);
	return (1);
}

unsigned int ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
