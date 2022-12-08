/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:41:20 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/12/05 21:41:21 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	if (!s)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write (fd, &s[i], 1);
		i++;
	}
}
