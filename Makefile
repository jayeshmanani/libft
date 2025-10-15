CC= gcc
CFLAGS= -Wall -Wextra -Werror

NAME= libft.a

SOURCES= $(wildcard *.c)

OBJS= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating the Static Library $(NAME)"
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
