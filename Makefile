NAME = push_swap
FLAGS = -Wall -Werror -Wextra
CC = cc

#includes
INCLUDES = -I
SRCDIR = .
LIBFT = libft/libft.a

SRCS = main.c

OBJ = $(SRCS:$(SRCDIR)/%.c=%.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all