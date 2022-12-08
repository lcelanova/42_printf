/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:41:00 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/06 14:17:22 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int ft_print_string(va_list args)
{
	char	*str;
	size_t	len;
	
	if (!args)
		return (0);
	str = va_arg(args, char *);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return(len);
}
