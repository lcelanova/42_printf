/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:41:12 by laura             #+#    #+#             */
/*   Updated: 2022/12/08 18:58:07 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_conditions(va_list args, const char c)
{
	if (c == 'c')
		return (ft_print_char(args));
	else if (c == 'd' || c == 'i')
		return (ft_print_number(args));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexadecimal(c, args));
	else if (c == '%')
		return (ft_print_percent());
	else if (c == 'u')
		return (ft_print_unsigned(args));
	else if (c == 'p')
		return (ft_print_pointer(args));
	else if (c == 's')
		return (ft_print_string(args));
	else
		return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	bytes;

	va_start(args, str);
	i = 0;
	bytes = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			bytes += ft_conditions(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			bytes += (1);
		}
		i++;
	}
	va_end(args);
	return (bytes);
}
