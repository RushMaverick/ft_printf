NAME: libftprintf.a

INC = libftprintf.h

SRC = \
ft_printf.c

all:  $(NAME)

$(NAME): 
	cc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) $(SRC:.c=.o)

clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all