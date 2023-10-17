CC=cc
CFLAGS=-Wall -Wextra -Werror
OUT=libft.a

SRC= ft_isalpha.c

INCLUDES= ./
HEADERS= $(INCLUDES)
OBJS=$(SRC:.c=.o)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

$(OUT) : $(OBJS)
	ar rc $(OUT) $(OBJS)
	ranlib $(OUT)


all: $(OUT)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OUT)

re: fclean all	
