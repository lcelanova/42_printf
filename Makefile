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

NAME= libftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f


SRCS		 =	 ft_printf.c \
			 ft_print_number.c \
			 ft_print_pointer.c \
			 ft_print_char.c \
			 ft_print_string.c \
			 ft_print_hex.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putnbr_fd.c \
			 ft_strlen.c \
			 

OBJS = $(SRCS:.c=.o) 

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all re clean fclean
