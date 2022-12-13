/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:39:49 by laura             #+#    #+#             */
/*   Updated: 2022/12/06 14:19:41 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

unsigned int	ft_print_number(va_list args);
unsigned int	ft_print_char(va_list args);
unsigned int	ft_print_hexadecimal(char c, va_list args);
unsigned int	ft_print_unsigned(va_list args);
unsigned int	ft_print_pointer(va_list args);
unsigned int	ft_print_string(va_list args);
unsigned int	ft_print_percent(void);
void			ft_putnbr_fd(int n, int fd);
void			ft_putunsigned_fd(unsigned int n, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_print_hex(char c, unsigned int n);
size_t			ft_count_digits(long n);
size_t			ft_strlen(const char *s);
int				ft_printf(char const *str, ...);
int				ft_conditions(va_list args, const char c);
void			ft_print_hex_pointer(unsigned long n);
size_t			ft_count_digits_pointer(unsigned long n);
size_t			ft_count_digits_hex(unsigned int n);

#endif