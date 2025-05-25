NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = clean_joined_str.c \
free_words.c \
micro_utils.c \
parsing_utils.c \
parsing.c \
ps_split.c \
ps_strdup.c \
ps_strjoin.c \
ps_strlen.c \
push_swap.c \

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re