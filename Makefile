CC = gcc
NAME = libft
CFLAGS = -Wall -Wextra -Werror
SRC = ft_*

ar: lib

# final: lib
# 	$(CC) $(CFLAGS) $(NAME).c -L. $(NAME).a


lib: comp
	ar rcs $(NAME).a $(SRC).o

comp:
	$(CC) $(CFLAGS) -c $(SRC).c

clean:
	rm $(SRC).o || true

fclean: clean
	rm a.out $(NAME).a || true

re: fclean all