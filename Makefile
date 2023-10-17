CC=cc
CFLAGS=
OUT=libft_tester
LIBFT=libft/libft.a
SRC= srcs/main.c srcs/libtester.c srcs/logger.c

HEADERS= includes/
OBJS=$(SRC:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -I $(HEADERS) -L $(LIBFT) -c $< -o ${<:.c=.o}

$(OUT) : $(OBJS)
	gcc -o $(OUT) $(OBJS) $(LIBFT)

all: libft $(OUT)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(OUT)

re: fclean all

libft:
	cd libft && make re


.PHONY: clean fclean re libft
