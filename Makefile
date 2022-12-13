# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 21:40:24 by lmunoz-f          #+#    #+#              #
#    Updated: 2022/12/05 21:47:45 by lmunoz-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS += -Wall -Wextra -Werror -Iinclude
AR = ar

NAME = libftprintf.a

HEADER = libftprintf.h

SRC		 =	 ft_printf.c \
			 ft_print_number.c \
			 ft_print_pointer.c \
			 ft_print_char.c \
			 ft_print_string.c \
			 ft_print_hex.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putnbr_fd.c \
			 ft_strlen.c \
			 

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): libft $(OBJS) $(HEADER) $(LIBFT_HEADER)
	$(AR) -rcs $(NAME) $(OBJS)

debug: CFLAGS += -g
debug: fclean all
	$(CC) $(CFLAGS) test.c $(NAME) -o test

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_LIBFT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus debug libft
