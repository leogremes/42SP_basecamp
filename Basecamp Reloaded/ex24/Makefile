SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

all: libft.a

libft.a: ${OBJ}
	ar rc $@ $^

./srcs/%.o: ./srcs/%.c ./includes/*.h
	gcc -c -Wall -Werror -Wextra -o $@ $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf libft.a

re: fclean all

.PHONY: all clean fclean re