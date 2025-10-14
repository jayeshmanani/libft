CC= gcc
CFLAGS= -Wall -Wextra -Werror

NAME= libft.a

SOURCES= $(wildcard *.c)

OBJS= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

.c.o:
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
