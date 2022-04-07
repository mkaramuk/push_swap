CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror  -I./libft
LFLAGS 	= -L./libft -lft
LFT 	= ./libft/libft.a
SRCS	= $(wildcard *.c)
OBJS 	= $(SRCS:.c=.o)
NAME 	= push_swap
LIST	:= $(shell "ruby" "-e" "puts (-50..49).to_a.shuffle.join(' ')")

all: $(NAME)

$(LFT):
	make -C ./libft

$(NAME): $(OBJS) $(LFT)
	$(CC) $(LFLAGS) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	rm -rf push_swap_visualizer/$(NAME)
	make fclean -C ./libft

re: fclean all

test: $(NAME)
	@bash tester/tester.sh

vis: $(NAME)
	cp push_swap push_swap_visualizer/$(NAME)
	python3 push_swap_visualizer/pyviz.py $(LIST)

check: $(NAME)
	./push_swap $(LIST) | ./checker_Mac $(LIST)

count: $(NAME)
	@echo $(LIST)
	@./$(NAME) $(LIST) | wc -l

run: $(NAME)
	./$(NAME) $(LIST)

.PHONY: run clean fclean all vis check test re