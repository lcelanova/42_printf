/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:41:22 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/05 21:41:23 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunsigned_fd(unsigned long n, int fd)
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
