NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_putnbr.c  
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c printfh.h
	$(cc) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: clean