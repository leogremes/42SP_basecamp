NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ft_display_file.o
	${CC} ${CFLAGS} -o $@ $^

ft_display_file.o: ft_display_file.c
	${CC} ${CFLAGS} -c -o $@ $^

clean:
	rm -rf ft_display_file.o

fclean: clean
	rm -rf ft_display_file

re: fclean all

.PHONY: all clean fclean re