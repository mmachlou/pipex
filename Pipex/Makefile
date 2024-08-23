PROG    = pipex

SRCS    = pipex.c utlis.c
OBJS    = $(SRCS:.c=.o)

HEADER  = -Iincludes

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -g


%.o: %.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

all: $(PROG)

$(PROG): $(OBJS)
	@make re -C ./libft
	$(CC) $(OBJS) -Llibft -lft -o $(PROG)

clean:
	@make clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	@make fclean -C ./libft
	rm -f $(PROG)

re: fclean all

.PHONY: all clean fclean re
