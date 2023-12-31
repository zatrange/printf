# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 17:30:25 by zgtaib            #+#    #+#              #
#    Updated: 2023/12/08 11:26:52 by zgtaib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c \
		ft_printnbr.c \
		ft_printchar.c \
		ft_printunsigned.c \
		ft_printstr.c \
		ft_printhexa.c \
		ft_printptr.c 
OBJ  = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean

