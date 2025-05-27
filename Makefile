NAME	= push_swap

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

SRCS	= clean_joined_str.c \
		free_strs.c \
		micro_utils.c \
		parsing_utils.c \
		parsing.c \
		ps_split.c \
		ps_strdup.c \
		ps_strjoin.c \
		ps_strlen.c \
		push_swap.c \
		ps_atoi_safe.c \
		ps_lst_new.c \
		ps_lst_add_back.c \
		init_list.c \
		free_list.c \
		ps_lst_size.c \
		sort_stack.c \
		swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \

OBJS	= $(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) entry_banner
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@echo "cleaning objects..."
	@rm -f $(OBJS)

fclean: clean exit_banner
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re entry_banner exit_banner

entry_banner:
	@echo "\033[1;37m ██▓    ▄▄▄       █    ██  ███▄    █  ▄████▄   ██░ ██  ██▓ ███▄    █   ▄████ "
	@echo "▓██▒   ▒████▄     ██  ▓██▒ ██ ▀█   █ ▒██▀ ▀█  ▓██░ ██▒▓██▒ ██ ▀█   █  ██▒ ▀█▒"
	@echo "▒██░   ▒██  ▀█▄  ▓██  ▒██░▓██  ▀█ ██▒▒▓█    ▄ ▒██▀▀██░▒██▒▓██  ▀█ ██▒▒██░▄▄▄░"
	@echo "▒██░   ░██▄▄▄▄██ ▓▓█  ░██░▓██▒  ▐▌██▒▒▓▓▄ ▄██▒░▓█ ░██ ░██░▓██▒  ▐▌██▒░▓█  ██▓"
	@echo "░██████▒▓█   ▓██▒▒▒█████▓ ▒██░   ▓██░▒ ▓███▀ ░░▓█▒░██▓░██░▒██░   ▓██░░▒▓███▀▒"
	@echo "\033[1;31m░ ▒░▓  ░▒▒   ▓▒█░░▒▓▒ ▒ ▒ ░ ▒░   ▒ ▒ ░ ░▒ ▒  ░ ▒ ░░▒░▒░▓  ░ ▒░   ▒ ▒  ░▒   ▒ "
	@echo "░ ░ ▒  ░ ▒   ▒▒ ░░░▒░ ░ ░ ░ ░░   ░ ▒░  ░  ▒    ▒ ░▒░ ░ ▒ ░░ ░░   ░ ▒░  ░   ░ "
	@echo "  ░ ░    ░   ▒    ░░░ ░ ░    ░   ░ ░ ░         ░  ░░ ░ ▒ ░   ░   ░ ░ ░ ░   ░ "
	@echo "    ░  ░     ░  ░   ░              ░ ░ ░       ░  ░  ░ ░           ░       ░ "
	@echo "                                     ░                                       "
	@echo "\033[1;31m ██▀███   ▄▄▄      ▓█████▄  ██▓▒██   ██▒ ▐██▌                                "
	@echo "▓██ ▒ ██▒▒████▄    ▒██▀ ██▌▓██▒▒▒ █ █ ▒░ ▐██▌                                "
	@echo "▓██ ░▄█ ▒▒██  ▀█▄  ░██   █▌▒██▒░░  █   ░ ▐██▌                                "
	@echo "▒██▀▀█▄  ░██▄▄▄▄██ ░▓█▄   ▌░██░ ░ █ █ ▒  ▓██▒                                "
	@echo "░██▓ ▒██▒ ▓█   ▓██▒░▒████▓ ░██░▒██▒ ▒██▒ ▒▄▄                                 "
	@echo "░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ▒▒ ░ ░▓ ░ ░▀▀▒                                "
	@echo "  ░▒ ░ ▒░  ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░░   ░▒ ░ ░  ░                                "
	@echo "  ░░   ░   ░   ▒    ░ ░  ░  ▒ ░ ░    ░      ░                                "
	@echo "   ░           ░  ░   ░     ░   ░    ░   ░                                   "
	@echo "                    ░                                                        "
	@echo "\033[0m"

exit_banner:
	@echo "\033[1;37m ██▓     ▒█████   ██▒   █▓▓█████        "
	@echo "▓██▒    ▒██▒  ██▒▓██░   █▒▓█   ▀        "
	@echo "▒██░    ▒██░  ██▒ ▓██  █▒░▒███          "
	@echo "▒██░    ▒██   ██░  ▒██ █░░▒▓█  ▄        "
	@echo "░██████▒░ ████▓▒░   ▒▀█░  ░▒████▒ ██▓   "
	@echo "\033[1;31m░ ▒░▓  ░░ ▒░▒░▒░    ░ ▐░  ░░ ▒░ ░ ▒▓▒   "
	@echo "░ ░ ▒  ░  ░ ▒ ▒░    ░ ░░   ░ ░  ░ ░▒    "
	@echo "  ░ ░   ░ ░ ░ ▒       ░░     ░    ░     "
	@echo "    ░  ░    ░ ░        ░     ░  ░  ░    "
	@echo "                      ░            ░    "
	@echo " ██▀███   ▄▄▄      ▓█████▄  ██▓▒██   ██▒"
	@echo "▓██ ▒ ██▒▒████▄    ▒██▀ ██▌▓██▒▒▒ █ █ ▒░"
	@echo "▓██ ░▄█ ▒▒██  ▀█▄  ░██   █▌▒██▒░░  █   ░"
	@echo "▒██▀▀█▄  ░██▄▄▄▄██ ░▓█▄   ▌░██░ ░ █ █ ▒ "
	@echo "░██▓ ▒██▒ ▓█   ▓██▒░▒████▓ ░██░▒██▒ ▒██▒"
	@echo "░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ▒▒ ░ ░▓ ░"
	@echo "  ░▒ ░ ▒░  ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░░   ░▒ ░"
	@echo "  ░░   ░   ░   ▒    ░ ░  ░  ▒ ░ ░    ░  "
	@echo "   ░           ░  ░   ░     ░   ░    ░  "
	@echo "                    ░                  "
	@echo "\033[0m"
