CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c
OBJS = $(patsubst %.c, %.o, $(SRCS))
INC = includes
LIB = libft.a
MKLIB = ar crs

all: $(LIB)

$(LIB):$(OBJS)
	$(MKLIB) $(LIB) $(OBJS)

$(OBJS): %.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I $(INC)

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(LIB)
re: fclean all
