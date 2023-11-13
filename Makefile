NAME = push_swap
SRCS = error_control.c libft_fonc.c push_and_rotex.c push_swap_utils.c rotate_fonc.c swap_fonc.c libft_fon.c sort.c sort_for_short.c push_swap_main.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -o push_swap $(OBJS) 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf push_swap

re: fclean all

.PHONY: all clean fclean re
