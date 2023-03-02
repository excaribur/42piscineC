CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = test1.c test2.c  						//change fuction
OBJS = $(patsubst %.c, %.o, $(SRCS))
NAME = rush-02

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJS): %.o : %.c
	$(CC) -c $(CFLAGS) $, -o $@

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all


