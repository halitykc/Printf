
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printc.c  ft_printp.c  ft_prints.c	ft_printid.c ft_printu.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

run :
	$(CC) $(CFLAGS) ft_printf.c libftprintf.a
	./a.out

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus