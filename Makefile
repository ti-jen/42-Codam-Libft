CC = gcc
NAME = main
CFLAGS = -Wall -Wextra -Werror
SRC = ft_*

all: final

final: lib
	$(CC) $(CFLAGS) $(NAME).c -L. libft.a


lib: comp
	ar rcs libft.a $(SRC).o

comp:
	$(CC) $(CFLAGS) -c $(SRC).c

clean:
	rm $(SRC).o || true

fclean: clean
	rm a.out libft.a || true

re: fclean all