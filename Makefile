NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_print_char.c ft_print_digit.c ft_print_hexa.c ft_print_point.c \
	ft_print_sign.c ft_print_uns_digit.c ft_printf.c ft_print_string.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re