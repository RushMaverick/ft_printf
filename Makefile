NAME = libftprintf.a

INC = libftprintf.h

SRC = \
ft_printf.c			ft_putchar_print.c		ft_putstr_print.c		ft_printf_utils.c \
ft_putnbr_print.c	ft_itoabase.c			

all:  $(NAME)

$(NAME): 
	make -C libft 
	cc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) $(SRC:.c=.o)

clean:
	make -C libft clean
	rm -f $(SRC:.c=.o)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all