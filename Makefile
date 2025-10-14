CC:= gcc
CFLAGS:= -Wall -Wextra -Werror

NAME:= libft.a

# SOURCES := $(wildcard *.c)

OBJECTS := $(%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -cr $@ $(OBJS)

$(OBJECTS): %.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

# %.o: %.c
# 	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re