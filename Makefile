NAME = libftprintf.a

INC = libftprintf.h

SRC = \
ft_printf.c		ft_putchar_fd.c		ft_putstr_print.c		ft_printf_utils.c

all:  $(NAME)

$(NAME): 
	cc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) $(SRC:.c=.o)

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all