CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = src/main.c src/find_max.c src/put_error.c src/temp_map.c src/to_strmap.c src/utils.c src/to_print.c src/put_error.c
OBJS = $(SRCS:.c=.o)
NAME = bsq
INCLUDE = ./includes


all : $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re :	fclean all

.PHONY : all clean fclean re
