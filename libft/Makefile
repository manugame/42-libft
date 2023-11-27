CC=cc
CFLAGS=-Wall -Wextra -Werror
OUT=libft.a

SRC= ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c 


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
