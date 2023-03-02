CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c\
		ft_atoi_nospace.c\
		ft_checkinput.c\
		ft_free_dict.c\
		ft_open.c\
		ft_putstr.c\
		ft_screen_nbrs.c\
		ft_screen_put.c\
		ft_screen_999.c\
		ft_strdup.c\
		ft_strnlen.c\
		main.c\

OBJS = $(patsubst %.c, %.o, $(SRCS))
HEAD = header.h
NAME = rush-02

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -g $(OBJS) -o $@

$(OBJS): %.o : %.c
	$(CC) -c -g  $(CFLAGS) $< -o $@

clean:
	/bin/rm -f $(OBJS)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all


