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

int ft_conditions(va_list args, const char c)
{
	if (c == 'c')
		return(ft_print_char(args));
	else if (c == 'd' || c == 'i') 
		return(ft_print_number(args));
	else if (c == 'x' || c == 'X')
		return(ft_print_hexadecimal(c, args));
	else if (c == '%')
		return(ft_print_percent());
	else if (c == 'u')
		return(ft_print_unsigned(args));
	else if (c == 'p')
		return(ft_print_pointer(args));
	else if (c == 's')
		return(ft_print_string(args));
	else 
		return(0);
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

int main(void)
{
/* 	char a = 'C';
	int b = 4;
	unsigned long c = 4;
	int *d = &b;
	char *e = "hello"; */
	
//char
	ft_printf(" %c %c %c \n", '1', 0, 'p');
	printf(" %c %c %c \n", '1', 0, '1');
}
/*
//decimal
	ft_printf("%d\n", ft_printf("decimal: %d\n", b));
	printf("%d\n", printf("decimal: %d\n", b));
//int
	ft_printf("%d\n", ft_printf("int: %i\n", b));
	printf("%d\n", printf("int: %i\n", b));
// unsigned
	ft_printf("%d\n", ft_printf("unsigned long: %u\n", c));
	printf("%d\n", printf("unsigned long: %lu\n", c));
//hexadecimal lower
	ft_printf("%d\n", ft_printf("hexadecimal lower: %x\n", b));
	printf("%d\n", printf("hexadecimal lower: %x\n", b));
//hexadecimal upper
	ft_printf("%d\n", ft_printf("hexadecimal upper: %X\n", b));
	printf("%d\n", printf("hexadecimal upper: %X\n", b));
//pointer
	ft_printf("%d\n", ft_printf("pointer: %p\n", d));
	printf("%d\n", printf("pointer: %p\n", d));
//string
	ft_printf("%d\n", ft_printf("string: %s\n", e));
	printf("%d\n", printf("string: %s\n", e));
// Percentage
	ft_printf("%d\n", ft_printf("%%\n"));
	printf("%d\n", printf("%%\n"));
}
 */